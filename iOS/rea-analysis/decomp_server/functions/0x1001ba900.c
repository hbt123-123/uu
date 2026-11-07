// rea decompile_all
// name: FUN_1001ba900
// address: 0x1001ba900
// body: available
// range: 0x1001ba900-0x1001baa37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001ba9f0 to 0x1007dbf50 _$sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001001ba944) */

void FUN_1001ba900(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x22;
  code *pcVar6;
  double dVar7;
  double dVar8;
  
  __s10Foundation4DateVACycfC(*(undefined8 *)(unaff_x22 + 0x30));
  __sScTss5NeverORszABRs_rlE17checkCancellationyyKFZ();
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar4 = *(long *)(unaff_x22 + 0x20);
  dVar7 = *(double *)(unaff_x22 + 0x10);
  dVar8 = (double)(long)dVar7;
  __s10Foundation4DateVACycfC(uVar1);
  __s10Foundation4DateV17timeIntervalSinceySdACF(uVar3);
  pcVar6 = *(code **)(lVar4 + 8);
  *(code **)(unaff_x22 + 0x38) = pcVar6;
  (*pcVar6)(uVar1,uVar2);
  if (dVar8 <= dVar7) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
    (*pcVar6)(uVar2,*(undefined8 *)(unaff_x22 + 0x18));
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001001baa34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  plVar5 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_100996068
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1001baa38;
  __sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ(1000000000);
  return;
}

