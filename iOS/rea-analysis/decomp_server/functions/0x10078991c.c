// rea decompile_all
// name: FUN_10078991c
// address: 0x10078991c
// body: available
// range: 0x10078991c-0x100789a8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100789a8c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_10078991c(ID param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  ID IVar5;
  z_stream local_a0;
  
  IVar2 = objc_stub::length(param_1);
  if ((uInt)IVar2 == 0) {
    IVar2 = objc_stub::data((ID)&_OBJC_CLASS___NSData);
  }
  else {
    local_a0.zalloc = (alloc_func)0x0;
    local_a0.zfree = (free_func)0x0;
    local_a0.opaque = (voidpf)0x0;
    _objc_retainAutorelease();
    local_a0.next_in = (Bytef *)objc_stub::bytes(param_1);
    local_a0.total_out = 0;
    local_a0.avail_out = 0;
    local_a0.avail_in = (uInt)IVar2;
    iVar1 = _deflateInit2_(&local_a0,param_2,8,0x1f,9,0,"1.2.12",0x70);
    if (iVar1 == 0) {
      IVar2 = objc_stub::dataWithLength_
                        ((ID)&_OBJC_CLASS___NSMutableData,
                         (long)((double)(IVar2 & 0xffffffff) * 1.02 + 50.0));
      _objc_retainAutorelease();
      IVar4 = objc_stub::mutableBytes(IVar2);
      IVar5 = objc_stub::length(IVar2);
      do {
        local_a0.next_out = (Bytef *)(IVar4 + local_a0.total_out);
        local_a0.avail_out = (int)IVar5 - (int)local_a0.total_out;
        iVar1 = _deflate(&local_a0,4);
      } while (iVar1 == 0);
      objc_stub::setLength_(IVar2,local_a0.total_out);
      _deflateEnd(&local_a0);
    }
    else if (param_3 == (undefined8 *)0x0) {
      IVar2 = 0;
    }
    else {
      uVar3 = 0x67;
      FUN_100756bd8(0x67,&cf_deflateInit2error);
      IVar2 = 0;
      *param_3 = uVar3;
    }
  }
  return IVar2;
}

