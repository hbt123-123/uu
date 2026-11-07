// rea decompile_all
// name: FUN_100467dcc
// address: 0x100467dcc
// body: available
// range: 0x100467dcc-0x100467ec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100467dcc(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 local_40;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1004679e8(0);
    _swift_allocObject();
    FUN_100474804(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  uStack_e8 = *(undefined8 *)(lVar3 + 0x38);
  uStack_f0 = *(undefined8 *)(lVar3 + 0x30);
  uStack_d8 = *(undefined8 *)(lVar3 + 0x48);
  local_e0 = *(undefined8 *)(lVar3 + 0x40);
  uStack_c8 = *(undefined8 *)(lVar3 + 0x58);
  uStack_d0 = *(undefined8 *)(lVar3 + 0x50);
  uStack_b8 = *(undefined8 *)(lVar3 + 0x68);
  local_c0 = *(undefined8 *)(lVar3 + 0x60);
  uStack_a8 = *(undefined8 *)(lVar3 + 0x78);
  uStack_b0 = *(undefined8 *)(lVar3 + 0x70);
  uStack_98 = *(undefined8 *)(lVar3 + 0x88);
  local_a0 = *(undefined8 *)(lVar3 + 0x80);
  uStack_88 = *(undefined8 *)(lVar3 + 0x98);
  uStack_90 = *(undefined8 *)(lVar3 + 0x90);
  uStack_78 = *(undefined8 *)(lVar3 + 0xa8);
  local_80 = *(undefined8 *)(lVar3 + 0xa0);
  uStack_68 = *(undefined8 *)(lVar3 + 0xb8);
  uStack_70 = *(undefined8 *)(lVar3 + 0xb0);
  uStack_58 = *(undefined8 *)(lVar3 + 200);
  local_60 = *(undefined8 *)(lVar3 + 0xc0);
  local_40 = *(undefined1 *)(lVar3 + 0xe0);
  uStack_48 = *(undefined8 *)(lVar3 + 0xd8);
  uStack_50 = *(undefined8 *)(lVar3 + 0xd0);
  uStack_f8 = *(undefined8 *)(lVar3 + 0x28);
  local_100 = *(undefined8 *)(lVar3 + 0x20);
  uVar2 = param_1[8];
  uVar5 = param_1[0xb];
  uVar4 = param_1[10];
  *(undefined8 *)(lVar3 + 0x68) = param_1[9];
  *(undefined8 *)(lVar3 + 0x60) = uVar2;
  *(undefined8 *)(lVar3 + 0x78) = uVar5;
  *(undefined8 *)(lVar3 + 0x70) = uVar4;
  uVar5 = param_1[4];
  uVar4 = param_1[7];
  uVar2 = param_1[6];
  *(undefined8 *)(lVar3 + 0x48) = param_1[5];
  *(undefined8 *)(lVar3 + 0x40) = uVar5;
  *(undefined8 *)(lVar3 + 0x58) = uVar4;
  *(undefined8 *)(lVar3 + 0x50) = uVar2;
  uVar2 = *param_1;
  uVar5 = param_1[3];
  uVar4 = param_1[2];
  *(undefined8 *)(lVar3 + 0x28) = param_1[1];
  *(undefined8 *)(lVar3 + 0x20) = uVar2;
  *(undefined8 *)(lVar3 + 0x38) = uVar5;
  *(undefined8 *)(lVar3 + 0x30) = uVar4;
  uVar2 = param_1[0x14];
  uVar5 = param_1[0x17];
  uVar4 = param_1[0x16];
  *(undefined8 *)(lVar3 + 200) = param_1[0x15];
  *(undefined8 *)(lVar3 + 0xc0) = uVar2;
  *(undefined8 *)(lVar3 + 0xd8) = uVar5;
  *(undefined8 *)(lVar3 + 0xd0) = uVar4;
  *(undefined1 *)(lVar3 + 0xe0) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = param_1[0xc];
  uVar5 = param_1[0xf];
  uVar4 = param_1[0xe];
  *(undefined8 *)(lVar3 + 0x88) = param_1[0xd];
  *(undefined8 *)(lVar3 + 0x80) = uVar2;
  *(undefined8 *)(lVar3 + 0x98) = uVar5;
  *(undefined8 *)(lVar3 + 0x90) = uVar4;
  uVar5 = param_1[0x10];
  uVar4 = param_1[0x13];
  uVar2 = param_1[0x12];
  *(undefined8 *)(lVar3 + 0xa8) = param_1[0x11];
  *(undefined8 *)(lVar3 + 0xa0) = uVar5;
  *(undefined8 *)(lVar3 + 0xb8) = uVar4;
  *(undefined8 *)(lVar3 + 0xb0) = uVar2;
  FUN_100040bb4(&local_100,&DAT_100aa09a8,&BYTE_10082db80);
  return;
}

