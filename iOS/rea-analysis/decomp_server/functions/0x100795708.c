// rea decompile_all
// name: SentryCrashJSONCodec::initWithEncodeOptions:decodeOptions:
// address: 0x100795708
// body: available
// range: 0x100795708-0x1007958cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashJSONCodec::initWithEncodeOptions_decodeOptions_
             (ID param_1,SEL param_2,int param_3,int param_4)

{
  ID self;
  ID IVar1;
  void *pvVar2;
  undefined8 *puVar3;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryCrashJSONCodec;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    IVar1 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
    objc_stub::FUN_1007f2020(self,IVar1);
    pvVar2 = _malloc(0x50);
    objc_stub::FUN_1007f1ee0(self,pvVar2);
    IVar1 = objc_stub::FUN_1007e63c0(self);
    if (IVar1 == 0) {
      _NSLog(&cf_Couldnotallocatecallbacks);
      self = 0;
    }
    else {
      IVar1 = objc_stub::FUN_1007e63c0(self);
      *(code **)(IVar1 + 0x38) = FUN_1007958cc;
      IVar1 = objc_stub::FUN_1007e63c0(self);
      *(code **)(IVar1 + 0x30) = FUN_10079595c;
      puVar3 = (undefined8 *)objc_stub::FUN_1007e63c0(self);
      *puVar3 = FUN_1007959ec;
      IVar1 = objc_stub::FUN_1007e63c0(self);
      *(code **)(IVar1 + 0x40) = FUN_100795a84;
      IVar1 = objc_stub::FUN_1007e63c0(self);
      *(code **)(IVar1 + 0x48) = FUN_100795b3c;
      IVar1 = objc_stub::FUN_1007e63c0(self);
      *(code **)(IVar1 + 8) = FUN_100795b44;
      IVar1 = objc_stub::FUN_1007e63c0(self);
      *(code **)(IVar1 + 0x10) = FUN_100795be4;
      IVar1 = objc_stub::FUN_1007e63c0(self);
      *(code **)(IVar1 + 0x18) = FUN_100795c7c;
      IVar1 = objc_stub::FUN_1007e63c0(self);
      *(code **)(IVar1 + 0x20) = FUN_100795d14;
      IVar1 = objc_stub::FUN_1007e63c0(self);
      *(code **)(IVar1 + 0x28) = FUN_100795e10;
      objc_stub::FUN_1007f4180(self,(ulong)(param_3 & 1));
      objc_stub::FUN_1007f4be0(self,(ulong)(param_3 >> 1 & 1));
      objc_stub::FUN_1007f33c0(self,(ulong)(param_4 & 1));
      objc_stub::FUN_1007f33e0(self,(ulong)(param_4 >> 1 & 1));
    }
  }
  return self;
}

