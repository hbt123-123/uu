// rea decompile_all
// name: FUN_100178e4c
// address: 0x100178e4c
// body: available
// range: 0x100178e4c-0x100178fef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * FUN_100178e4c(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_150 [16];
  undefined *local_140;
  undefined8 *puStack_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined1 *)(param_2 + 0x19);
  puVar2 = param_1;
  FUN_10017a488();
  _swift_allocObject();
  uVar5 = param_1[0x14];
  uVar7 = param_1[0x17];
  uVar6 = param_1[0x16];
  puVar2[0x32] = param_1[0x15];
  puVar2[0x31] = uVar5;
  puVar2[0x34] = uVar7;
  puVar2[0x33] = uVar6;
  uVar5 = param_1[0xc];
  uVar7 = param_1[0xf];
  uVar6 = param_1[0xe];
  puVar2[0x2a] = param_1[0xd];
  puVar2[0x29] = uVar5;
  puVar2[0x2c] = uVar7;
  puVar2[0x2b] = uVar6;
  uVar7 = param_1[0x10];
  uVar6 = param_1[0x13];
  uVar5 = param_1[0x12];
  puVar2[0x2e] = param_1[0x11];
  puVar2[0x2d] = uVar7;
  puVar2[0x30] = uVar6;
  puVar2[0x2f] = uVar5;
  uVar8 = param_1[1];
  uVar7 = *param_1;
  uVar5 = param_1[2];
  puVar2[0x20] = param_1[3];
  puVar2[0x1f] = uVar5;
  uVar5 = param_1[4];
  uVar9 = param_1[7];
  uVar6 = param_1[6];
  puVar2[0x22] = param_1[5];
  puVar2[0x21] = uVar5;
  puVar2[0x24] = uVar9;
  puVar2[0x23] = uVar6;
  uVar9 = param_1[8];
  uVar6 = param_1[0xb];
  uVar5 = param_1[10];
  puVar2[0x26] = param_1[9];
  puVar2[0x25] = uVar9;
  puVar2[0x28] = uVar6;
  puVar2[0x27] = uVar5;
  *(undefined1 *)(puVar2 + 0x1a) = 0;
  puVar2[0x1b] = 0x403e000000000000;
  *(undefined1 *)(puVar2 + 0x1c) = 1;
  puVar2[0x36] = 0;
  *(undefined1 *)(puVar2 + 0x35) = *(undefined1 *)(param_1 + 0x18);
  puVar2[0x1e] = uVar8;
  puVar2[0x1d] = uVar7;
  FUN_10017b52c(param_1,&local_128);
  FUN_100178304(&local_128);
  puVar2[0x13] = uStack_a0;
  puVar2[0x12] = local_a8;
  puVar2[0x15] = uStack_90;
  puVar2[0x14] = uStack_98;
  puVar2[0x17] = uStack_80;
  puVar2[0x16] = local_88;
  puVar2[0x19] = uStack_70;
  puVar2[0x18] = uStack_78;
  puVar2[0xb] = uStack_e0;
  puVar2[10] = local_e8;
  puVar2[0xd] = uStack_d0;
  puVar2[0xc] = local_d8;
  puVar2[0xf] = uStack_c0;
  puVar2[0xe] = local_c8;
  puVar2[0x11] = uStack_b0;
  puVar2[0x10] = uStack_b8;
  puVar2[3] = uStack_120;
  puVar2[2] = local_128;
  puVar2[5] = uStack_110;
  puVar2[4] = local_118;
  puVar2[7] = uStack_100;
  puVar2[6] = local_108;
  puVar2[9] = uStack_f0;
  puVar2[8] = local_f8;
  puVar2[0x1b] = uVar10;
  *(undefined1 *)(puVar2 + 0x1c) = uVar1;
  *(undefined1 *)(puVar2 + 0x1a) = *(undefined1 *)(param_2 + 0x18);
  puVar2[0x36] = param_2;
  puVar3 = &DAT_1009a0bb8;
  _swift_allocObject(&DAT_1009a0bb8,0x18,7);
  _swift_retain(param_2);
  _swift_weakInit(puVar3 + 0x10);
  local_140 = puVar3;
  puStack_138 = puVar2;
  FUN_100004bb4(&DAT_100a79cf0,&DAT_10080fb50);
  _swift_allocObject();
  pcVar4 = FUN_10017b640;
  FUN_100615648(FUN_10017b640,auStack_150);
  _swift_release(puVar2);
  _swift_release(puVar3);
  return pcVar4;
}

