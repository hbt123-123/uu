// rea decompile_all
// name: FUN_1001baaa0
// address: 0x1001baaa0
// body: available
// range: 0x1001baaa0-0x1001babd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001bab8c to 0x1007dbf50 _$sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001baaa0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  double dVar6;
  double dVar7;
  
  lVar5 = *(long *)(unaff_x22 + 0x48);
  __sScTss5NeverORszABRs_rlE17checkCancellationyyKFZ();
  if (lVar5 == 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
    lVar5 = *(long *)(unaff_x22 + 0x20);
    dVar6 = *(double *)(unaff_x22 + 0x10);
    dVar7 = (double)(long)dVar6;
    __s10Foundation4DateVACycfC(uVar1);
    __s10Foundation4DateV17timeIntervalSinceySdACF(uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
    *(code **)(unaff_x22 + 0x38) = UNRECOVERED_JUMPTABLE;
    (*UNRECOVERED_JUMPTABLE)(uVar1,uVar4);
    if (dVar6 < dVar7) {
      plVar3 = (long *)(ulong)*(uint *)(
                                       PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_100996068
                                       + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x40) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_1001baa38;
      __sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ(1000000000);
      return;
    }
    uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
    (*UNRECOVERED_JUMPTABLE)(uVar4,*(undefined8 *)(unaff_x22 + 0x18));
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    (**(code **)(unaff_x22 + 0x38))(uVar1,*(undefined8 *)(unaff_x22 + 0x18));
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar4);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001001babd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

