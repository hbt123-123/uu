// rea decompile_all
// name: FUN_1000b5558
// address: 0x1000b5558
// body: available
// range: 0x1000b5558-0x1000b568f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000b55f4 to 0x1007dbf50 _$sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000b5558(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x22;
  
  lVar3 = 0;
  _CGEventCreateKeyboardEvent(0,*(undefined2 *)(unaff_x22 + 0x38),1);
  *(long *)(unaff_x22 + 0x20) = lVar3;
  if (lVar3 != 0) {
    lVar4 = 0;
    _CGEventCreateKeyboardEvent(0,*(undefined2 *)(unaff_x22 + 0x38),0);
    *(long *)(unaff_x22 + 0x28) = lVar4;
    if (lVar4 != 0) {
      _CGEventPost(0,lVar3);
      plVar5 = (long *)(ulong)*(uint *)(
                                       PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_100996068
                                       + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x30) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_1000b5690;
      __sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ(30000000);
      return;
    }
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  FUN_100401b14(0);
  lVar3 = 0x20;
  _swift_task_alloc();
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  *(undefined8 *)(lVar3 + 0x18) = uVar2;
  FUN_1003fb45c(FUN_1000b653c,lVar3,0xd000000000000099,0x8000000100881de0,0xd000000000000011,
                0x80000001008823d0,0x1a2,0);
  _swift_task_dealloc(lVar3);
                    /* WARNING: Could not recover jumptable at 0x0001000b568c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

