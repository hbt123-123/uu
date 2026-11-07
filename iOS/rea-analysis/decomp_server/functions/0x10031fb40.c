// rea decompile_all
// name: FUN_10031fb40
// address: 0x10031fb40
// body: available
// range: 0x10031fb40-0x10031fbcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10031fb40(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x38);
  lVar2 = *(long *)(unaff_x22 + 0x40);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
  iVar4 = *(int *)(lVar3 + 0x3c);
  lVar5 = 0;
  __ss6ResultOMa(0,*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20),
                 *(undefined8 *)(unaff_x22 + 0x28));
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))(uVar6,lVar2 + iVar4,lVar5);
  (**(code **)(lVar1 + 8))(lVar2,lVar3);
  _swift_task_dealloc(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010031fbc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

