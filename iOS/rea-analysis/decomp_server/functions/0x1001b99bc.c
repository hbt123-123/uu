// rea decompile_all
// name: FUN_1001b99bc
// address: 0x1001b99bc
// body: available
// range: 0x1001b99bc-0x1001b9a3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b99bc(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0xa8);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    uVar6 = *(undefined8 *)(lVar2 + 0x28);
    uVar5 = *(undefined8 *)(lVar2 + 0x20);
    puVar1[1] = *(undefined8 *)(lVar2 + 0x18);
    *puVar1 = uVar4;
    puVar1[3] = uVar6;
    puVar1[2] = uVar5;
    uVar5 = *(undefined8 *)(lVar2 + 0x38);
    uVar4 = *(undefined8 *)(lVar2 + 0x30);
    uVar7 = *(undefined8 *)(lVar2 + 0x48);
    uVar6 = *(undefined8 *)(lVar2 + 0x40);
    uVar8 = *(undefined8 *)(lVar2 + 0x50);
    uVar10 = *(undefined8 *)(lVar2 + 0x68);
    uVar9 = *(undefined8 *)(lVar2 + 0x60);
    puVar1[9] = *(undefined8 *)(lVar2 + 0x58);
    puVar1[8] = uVar8;
    puVar1[0xb] = uVar10;
    puVar1[10] = uVar9;
    puVar1[5] = uVar5;
    puVar1[4] = uVar4;
    puVar1[7] = uVar7;
    puVar1[6] = uVar6;
    uVar5 = *(undefined8 *)(lVar2 + 0x78);
    uVar4 = *(undefined8 *)(lVar2 + 0x70);
    uVar7 = *(undefined8 *)(lVar2 + 0x88);
    uVar6 = *(undefined8 *)(lVar2 + 0x80);
    uVar9 = *(undefined8 *)(lVar2 + 0x98);
    uVar8 = *(undefined8 *)(lVar2 + 0x90);
    puVar1[0x12] = *(undefined8 *)(lVar2 + 0xa0);
    puVar1[0xf] = uVar7;
    puVar1[0xe] = uVar6;
    puVar1[0x11] = uVar9;
    puVar1[0x10] = uVar8;
    puVar1[0xd] = uVar5;
    puVar1[0xc] = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x0001001b9a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}

