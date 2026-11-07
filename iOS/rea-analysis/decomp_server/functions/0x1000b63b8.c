// rea decompile_all
// name: FUN_1000b63b8
// address: 0x1000b63b8
// body: available
// range: 0x1000b63b8-0x1000b6533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000b6530 to 0x1000b574c FUN_1000b574c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000b63b8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar1 = 0x65756c61565841;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x65756c61565841,0xe700000000000000);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,uVar3);
  _AXUIElementSetAttributeValue(uVar6,uVar1,uVar5);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  if ((int)uVar6 != 0) {
    FUN_100401b14(0);
    lVar2 = 0x20;
    _swift_task_alloc();
    *(int *)(lVar2 + 0x10) = (int)uVar6;
    FUN_1003fb45c(FUN_1000b6534,lVar2,0xd000000000000099,0x8000000100881de0,0xd000000000000016,
                  0x80000001008822e0,0x154,0);
    _swift_task_dealloc(lVar2);
                    /* WARNING: Could not recover jumptable at 0x0001000b64e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  __sSS5countSivg(uVar3,*(undefined8 *)(unaff_x22 + 0x18));
  plVar4 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1000b6088;
  FUN_1000b574c(0x4000000000000000,uVar5,uVar3);
  return;
}

