// rea decompile_all
// name: FUN_1004fb974
// address: 0x1004fb974
// body: available
// range: 0x1004fb974-0x1004fba7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004fb974(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar8 = *(long *)(unaff_x22 + 0xa8);
  lVar2 = *(long *)(unaff_x22 + 0x78);
  lVar3 = *(long *)(unaff_x22 + 0x80);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar7 = *(long *)(lVar2 + 0x18);
  FUN_1004f9894(lVar3 + *(int *)(lVar2 + 0x34),unaff_x22 + 0x10);
  uVar5 = *(undefined1 *)(lVar3 + *(int *)(lVar2 + 0x38));
  puVar1 = (undefined8 *)(lVar3 + *(int *)(lVar2 + 0x3c));
  uVar10 = *puVar1;
  uVar4 = *(undefined1 *)(puVar1 + 1);
  puVar6 = &DAT_100aaa108;
  FUN_100004bb4(&DAT_100aaa108,&DAT_1008358d0);
  FUN_100537714(uVar9,(undefined8 *)(unaff_x22 + 0x60),unaff_x22 + 0x10,uVar5,uVar10,uVar4,lVar7,
                puVar6,*(undefined8 *)(lVar2 + 0x28),&PTR_PTR_1009d1680);
  if (lVar8 == 0) {
    (**(code **)(*(long *)(lVar7 + -8) + 0x38))(*(undefined8 *)(unaff_x22 + 0x70),0,1,lVar7);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001004fba7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

