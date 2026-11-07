// rea decompile_all
// name: FUN_1005a0a24
// address: 0x1005a0a24
// body: available
// range: 0x1005a0a24-0x1005a0ba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005a0a24(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar10 = (undefined1 *)(unaff_x20 + 0x10);
  *puVar10 = 0xc;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  puVar8 = (undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *puVar8 = 0;
  puVar11 = (undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *puVar11 = 0;
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  uVar7 = *(undefined1 *)(param_1 + 0x10);
  _swift_beginAccess(puVar10,auStack_98,1,0);
  *puVar10 = uVar7;
  _swift_beginAccess(param_1 + 0x18,auStack_b0,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _swift_beginAccess(puVar11,auStack_c8,1,0);
  uVar12 = *puVar11;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  *puVar11 = uVar1;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar5;
  FUN_1005a7f54(uVar1,uVar4,uVar2,uVar5);
  FUN_100541944(uVar12,uVar3,uVar6,uVar9);
  _swift_beginAccess(param_1 + 0x38,auStack_e0,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  FUN_1005a7f54(uVar1,uVar4,uVar2,uVar5);
  _swift_release(param_1);
  _swift_beginAccess(puVar8,auStack_f8,1,0);
  uVar9 = *puVar8;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x50);
  *puVar8 = uVar1;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar5;
  FUN_100541944(uVar9,uVar3,uVar6,uVar12);
  return;
}

