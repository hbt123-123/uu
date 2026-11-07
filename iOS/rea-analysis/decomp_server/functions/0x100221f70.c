// rea decompile_all
// name: FUN_100221f70
// address: 0x100221f70
// body: available
// range: 0x100221f70-0x1002220a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002220a4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */

void FUN_100221f70(void)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined4 extraout_var;
  undefined *self;
  ID IVar5;
  char *pcVar6;
  long extraout_x8;
  long lVar7;
  undefined1 auStack_560 [8];
  utsname uStack_558;
  long local_58;
  undefined8 uVar4;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar3 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  _bzero(&uStack_558,0x500);
  iVar2 = _uname(&uStack_558);
  uVar4 = CONCAT44(extraout_var,iVar2);
  __sSS10FoundationE8EncodingV5asciiACvgZ(auStack_560 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE8EncodingV8rawValueSuvg();
  (**(code **)(lVar7 + 8))(auStack_560 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
  self = &_OBJC_CLASS___NSString;
  _objc_allocWithZone();
  IVar5 = _objc_msgSend((ID)self,"initWithBytes:length:encoding:",uStack_558.machine,0x100,uVar4);
  if (IVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10022209c);
    (*pcVar1)();
  }
  pcVar6 = "UTF8String";
  IVar5 = _objc_msgSend(IVar5,"UTF8String");
  if (IVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002220a0);
    (*pcVar1)();
  }
  __sSS14validatingUTF8SSSgSPys4Int8VG_tcfC(IVar5);
  if (pcVar6 == (char *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002220a4);
    (*pcVar1)();
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

