// rea decompile_all
// name: FUN_100324350
// address: 0x100324350
// body: available
// range: 0x100324350-0x100324467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100324414 to 0x1007dce8c _$ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100324464 to 0x100324b54 FUN_100324b54 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100324350(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined *puVar4;
  code *pcVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  lVar1 = 0x20;
  _swift_task_alloc();
  *(long *)(unaff_x22 + 0x30) = lVar1;
  uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  uVar2 = 0xf;
  __ss042_stdlib_isOSVersionAtLeastOrVariantVersiondE0yBi1_Bw_BwBwBwBwBwtF(0xf,0,0,0x12,0,0);
  if ((uVar2 & 1) != 0) {
    plVar3 = (long *)(ulong)*(uint *)(
                                     PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_100996098
                                     + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x38) = plVar3;
    puVar4 = &DAT_100a838d8;
    FUN_100004bb4(&DAT_100a838d8,&DAT_100817df8);
    *plVar3 = unaff_x22;
    plVar3[1] = (long)thunk_FUN_100321dd0;
    __ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF
              (*(undefined8 *)(unaff_x22 + 0x10),&DAT_10081a650,lVar1,FUN_10032cb68,
               *(undefined8 *)(unaff_x22 + 0x28),0,0,puVar4);
    return;
  }
  pcVar5 = FUN_10032cb68;
  _swift_task_addCancellationHandler(FUN_10032cb68,*(undefined8 *)(unaff_x22 + 0x28));
  *(code **)(unaff_x22 + 0x40) = pcVar5;
  plVar3 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10032204c;
  FUN_100324b54(plVar3,*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18),
                *(undefined8 *)(unaff_x22 + 0x20));
  return;
}

