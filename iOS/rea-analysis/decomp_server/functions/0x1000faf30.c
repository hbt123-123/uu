// rea decompile_all
// name: FUN_1000faf30
// address: 0x1000faf30
// body: available
// range: 0x1000faf30-0x1000fb163 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000fb008 to 0x1000fa9cc FUN_1000fa9cc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1000fb160 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1000faf30(void)

{
  ulong uVar1;
  undefined *self;
  ID self_00;
  undefined8 uVar2;
  long local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  FUN_100401b14(0);
  uVar1 = 0;
  FUN_1003fb48c(FUN_1000f80d8,0,0xd0000000000000a2,0x80000001008898a0,0xd000000000000011,
                0x800000010088a060,99,0);
  FUN_1004061c4();
  if ((uVar1 & 1) != 0) {
    if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
      uVar2 = 0xd000000000000015;
      FUN_1000fa9cc(0xd000000000000015,0x800000010088a0b0,0xaf90e58d87e9,0xa600000000000000);
      return uVar2;
    }
    goto LAB_1000fb160;
  }
  self = &_OBJC_CLASS___NSAppleScript;
  _objc_allocWithZone();
  uVar2 = 0xd00000000000002b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002b,0x800000010088a080);
  self_00 = _objc_msgSend((ID)self,"initWithSource:",uVar2);
  if (self_00 == 0) {
    FUN_1003fb4ec(FUN_1000f8104,0,0xd0000000000000a2,0x80000001008898a0,0xd000000000000011,
                  0x800000010088a060,0x6b,0);
LAB_1000fb0f0:
    uVar2 = 0;
  }
  else {
    local_50 = 0;
    _objc_msgSend(self_00,"executeAndReturnError:",&local_50);
    if (local_50 != 0) {
      FUN_1000fad38(local_50,0xaf90e58d87e9,0xa600000000000000);
      goto LAB_1000fb0f0;
    }
    FUN_1003fb48c(FUN_1000f8130,0,0xd0000000000000a2,0x80000001008898a0,0xd000000000000011,
                  0x800000010088a060,0x74,0);
    uVar2 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return uVar2;
  }
LAB_1000fb160:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

