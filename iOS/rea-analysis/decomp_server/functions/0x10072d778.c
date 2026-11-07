// rea decompile_all
// name: SAAESCrypt::encryptData:
// address: 0x10072d778
// body: available
// range: 0x10072d778-0x10072d97f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10072d8e4 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SAAESCrypt::encryptData_(ID param_1,SEL param_2,ID param_3)

{
  CCCryptorStatus CVar1;
  ID IVar2;
  ID IVar3;
  void *dataOut;
  ID IVar4;
  void *key;
  void *iv;
  void *dataIn;
  undefined *self;
  undefined8 uVar5;
  size_t local_68;
  
  IVar2 = objc_stub::length(param_3);
  if (IVar2 != 0) {
    IVar3 = objc_stub::length(param_3);
    dataOut = _malloc(IVar3 + 0x10);
    IVar4 = NSMutableData::dataWithLength_((ID)&_OBJC_CLASS___NSMutableData,0x10);
    uVar5 = *(undefined8 *)PTR__kSecRandomDefault_1009956a8;
    IVar2 = IVar4;
    _objc_retainAutorelease();
    IVar2 = objc_stub::mutableBytes(IVar2);
    _SecRandomCopyBytes(uVar5,0x10,IVar2);
    if ((int)uVar5 == 0) {
      local_68 = 0;
      IVar2 = SAAESCrypt::key(param_1);
      _objc_retainAutorelease();
      key = (void *)objc_stub::bytes(IVar2);
      IVar2 = IVar4;
      _objc_retainAutorelease();
      iv = (void *)objc_stub::bytes(IVar2);
      _objc_retainAutorelease();
      dataIn = (void *)objc_stub::bytes(param_3);
      CVar1 = _CCCrypt(0,0,1,key,0x10,iv,dataIn,IVar3,dataOut,IVar3 + 0x10,&local_68);
      if (CVar1 == 0) {
        IVar2 = NSData::dataWithBytes_length_((ID)&_OBJC_CLASS___NSData,dataOut,local_68);
        IVar3 = NSMutableData::dataWithData_((ID)&_OBJC_CLASS___NSMutableData,IVar4);
        NSMutableData::appendData_(IVar3,IVar2);
        _free(dataOut);
        IVar2 = NSMutableData::base64EncodedDataWithOptions_(IVar3,0x10);
        self = &_OBJC_CLASS___NSString;
        _objc_alloc();
        IVar2 = objc_stub::initWithData_encoding_((ID)self,IVar2,4);
        return IVar2;
      }
    }
    _free(dataOut);
  }
  return 0;
}

