// rea decompile_all
// name: FUN_1000fdfd8
// address: 0x1000fdfd8
// body: available
// range: 0x1000fdfd8-0x1000fe2eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000fdfd8(long *param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined1 auStack_280 [16];
  long *local_270;
  long local_260;
  long lStack_258;
  undefined7 uStack_218;
  undefined1 local_211;
  undefined7 uStack_210;
  undefined1 uStack_209;
  undefined7 uStack_208;
  undefined1 local_201;
  undefined7 uStack_200;
  undefined1 uStack_1f9;
  undefined7 uStack_1f8;
  undefined1 local_1f1;
  undefined7 uStack_1f0;
  undefined1 uStack_1e9;
  undefined7 uStack_1e8;
  undefined1 local_1e1;
  undefined7 uStack_1e0;
  undefined1 uStack_1d9;
  undefined7 uStack_1d8;
  undefined *local_1d0;
  long lStack_1c8;
  undefined *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0;
  long local_190;
  undefined *puStack_188;
  long lStack_180;
  long lStack_178;
  long local_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined *local_150;
  long lStack_148;
  long lStack_140;
  undefined *local_138;
  long local_130;
  long lStack_128;
  long local_120;
  long lStack_118;
  byte local_110;
  undefined1 auStack_108 [17];
  undefined4 local_f7;
  undefined3 uStack_f3;
  long local_f0;
  undefined *puStack_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *local_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  byte local_70;
  
  lStack_88 = param_1[5];
  local_90 = param_1[4];
  lStack_78 = param_1[7];
  lStack_80 = param_1[6];
  local_70 = *(byte *)(param_1 + 8);
  lStack_a8 = param_1[1];
  local_b0 = (undefined *)*param_1;
  puStack_98 = (undefined *)param_1[3];
  lStack_a0 = param_1[2];
  if ((local_70 & 1) == 0) {
    puStack_188 = (undefined *)param_1[1];
    local_190 = *param_1;
    lStack_178 = param_1[3];
    lStack_180 = param_1[2];
    lStack_168 = param_1[5];
    local_170 = param_1[4];
    lStack_158 = param_1[7];
    lStack_160 = param_1[6];
    uVar2 = 0;
    local_f0 = local_190;
    puStack_e8 = puStack_188;
    lStack_e0 = lStack_180;
    local_d8 = lStack_178;
    lStack_d0 = local_170;
    lStack_c8 = lStack_168;
    lStack_c0 = lStack_160;
    lStack_b8 = lStack_158;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar2);
    local_270 = &local_f0;
    FUN_1003fb48c(param_4,auStack_280,0xd000000000000094,0x800000010088a280,0xd00000000000001e,
                  0x800000010088a320,param_5,0);
    uStack_209 = SUB81(puStack_188,0);
    uStack_208 = (undefined7)((ulong)puStack_188 >> 8);
    local_211 = (undefined1)local_190;
    uStack_210 = (undefined7)((ulong)local_190 >> 8);
    uStack_1f9 = (undefined1)lStack_178;
    uStack_1f8 = (undefined7)((ulong)lStack_178 >> 8);
    local_201 = (undefined1)lStack_180;
    uStack_200 = (undefined7)((ulong)lStack_180 >> 8);
    uStack_1e9 = (undefined1)lStack_168;
    uStack_1e8 = (undefined7)((ulong)lStack_168 >> 8);
    local_1f1 = (undefined1)local_170;
    uStack_1f0 = (undefined7)((ulong)local_170 >> 8);
    uStack_1d9 = (undefined1)lStack_158;
    uStack_1d8 = (undefined7)((ulong)lStack_158 >> 8);
    local_1e1 = (undefined1)lStack_160;
    uStack_1e0 = (undefined7)((ulong)lStack_160 >> 8);
    local_1b8 = &DAT_1009d97b0;
    FUN_100102ee4();
    local_1b0 = param_4;
    FUN_100102f24();
    puVar3 = &DAT_10099cfb8;
    local_1a8 = param_4;
    _swift_allocObject(&DAT_10099cfb8,0x80,7);
    *(ulong *)(puVar3 + 0x29) = CONCAT17(uStack_1f9,uStack_200);
    *(ulong *)(puVar3 + 0x21) = CONCAT17(local_201,uStack_208);
    *(ulong *)(puVar3 + 0x39) = CONCAT17(uStack_1e9,uStack_1f0);
    *(ulong *)(puVar3 + 0x31) = CONCAT17(local_1f1,uStack_1f8);
    puVar3[0x10] = 1;
    *(ulong *)(puVar3 + 0x49) = CONCAT17(uStack_1d9,uStack_1e0);
    *(ulong *)(puVar3 + 0x41) = CONCAT17(local_1e1,uStack_1e8);
    *(ulong *)(puVar3 + 0x19) = CONCAT17(uStack_209,uStack_210);
    *(ulong *)(puVar3 + 0x11) = CONCAT17(local_211,uStack_218);
    *(ulong *)(puVar3 + 0x50) = CONCAT71(uStack_1d8,uStack_1d9);
    *(undefined8 *)(puVar3 + 0x58) = 0;
    *(undefined8 *)(puVar3 + 0x60) = 0;
    *(undefined8 *)(puVar3 + 0x68) = 0xe000000000000000;
    *(undefined8 *)(puVar3 + 0x70) = 0;
    *(undefined8 *)(puVar3 + 0x78) = 0xe000000000000000;
    local_1a0 = 1;
    lStack_128 = lStack_88;
    local_130 = local_90;
    lStack_118 = lStack_78;
    local_120 = lStack_80;
    local_110 = local_70;
    lStack_148 = lStack_a8;
    local_150 = local_b0;
    local_138 = puStack_98;
    lStack_140 = lStack_a0;
    local_1d0 = puVar3;
    FUN_100102ff8(&local_150,&local_260);
    (*param_2)(&local_1d0);
    ppuVar4 = &local_1d0;
  }
  else {
    puStack_e8 = (undefined *)param_1[1];
    local_f0 = *param_1;
    local_d8 = param_1[3];
    lStack_e0 = param_1[2];
    lStack_d0 = param_1[4];
    uVar2 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar2);
    local_270 = &local_f0;
    FUN_1003fb4bc(param_6,auStack_280,0xd000000000000094,0x800000010088a280,0xd00000000000001e,
                  0x800000010088a320,param_7,0);
    lVar1 = local_f0;
    lStack_1c8 = lStack_e0;
    local_1d0 = puStack_e8;
    lStack_258 = lStack_d0;
    local_260 = local_d8;
    local_138 = &DAT_1009d97b0;
    FUN_100102ee4();
    local_130 = param_6;
    FUN_100102f24();
    puVar3 = &DAT_10099cfb8;
    lStack_128 = param_6;
    _swift_allocObject(&DAT_10099cfb8,0x80,7);
    puVar3[0x10] = 0;
    *(undefined4 *)(puVar3 + 0x11) = local_f7;
    *(uint *)(puVar3 + 0x14) = CONCAT31(uStack_f3,local_f7._3_1_);
    *(undefined8 *)(puVar3 + 0x20) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)(puVar3 + 0x30) = 0;
    *(undefined8 *)(puVar3 + 0x28) = 0;
    *(undefined8 *)(puVar3 + 0x40) = 0;
    *(undefined8 *)(puVar3 + 0x38) = 0;
    *(undefined8 *)(puVar3 + 0x50) = 0;
    *(undefined8 *)(puVar3 + 0x48) = 0;
    *(long *)(puVar3 + 0x58) = lVar1;
    *(long *)(puVar3 + 0x68) = lStack_e0;
    *(undefined **)(puVar3 + 0x60) = puStack_e8;
    *(long *)(puVar3 + 0x78) = lStack_d0;
    *(long *)(puVar3 + 0x70) = local_d8;
    local_120 = CONCAT71(local_120._1_7_,1);
    local_150 = puVar3;
    FUN_100102fb4(&local_1d0,auStack_108);
    FUN_100102fb4(&local_260,auStack_108);
    (*param_2)(&local_150);
    ppuVar4 = &local_150;
  }
  FUN_100102518(ppuVar4);
  return;
}

