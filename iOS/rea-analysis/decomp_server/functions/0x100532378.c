// rea decompile_all
// name: FUN_100532378
// address: 0x100532378
// body: available
// range: 0x100532378-0x100532507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100532378(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_198 [80];
  undefined *local_148;
  undefined1 uStack_140;
  undefined1 uStack_13f;
  undefined6 uStack_13e;
  undefined2 uStack_138;
  undefined6 uStack_136;
  undefined2 uStack_130;
  undefined6 local_12e;
  undefined2 uStack_128;
  undefined6 uStack_126;
  undefined2 uStack_120;
  undefined6 local_11e;
  undefined2 uStack_118;
  undefined6 uStack_116;
  undefined2 uStack_110;
  undefined2 uStack_10e;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  byte bStack_100;
  byte bStack_ff;
  byte bStack_fe;
  byte bStack_fd;
  undefined *local_f8;
  undefined1 local_f0;
  undefined1 local_ef;
  undefined8 local_ee;
  undefined8 uStack_e6;
  undefined8 local_de;
  undefined8 uStack_d6;
  undefined8 local_ce;
  undefined6 uStack_c6;
  undefined2 uStack_c0;
  undefined6 uStack_be;
  undefined8 uStack_b8;
  byte local_b0;
  byte local_af;
  byte local_ae;
  byte local_ad;
  undefined6 uStack_a8;
  undefined2 local_a2;
  undefined6 uStack_a0;
  undefined2 uStack_9a;
  undefined6 uStack_98;
  undefined2 local_92;
  undefined6 uStack_90;
  undefined2 uStack_8a;
  undefined6 uStack_88;
  undefined2 local_82;
  undefined6 uStack_80;
  undefined2 uStack_7a;
  undefined6 uStack_78;
  undefined1 local_71;
  undefined1 local_70 [48];
  
  local_71 = 1;
  puVar1 = param_2;
  _swift_conformsToProtocol(param_2,&TargetProtocolDescriptor_10090176c);
  if (puVar1 == (undefined1 *)0x0 || param_2 == (undefined1 *)0x0) {
    FUN_1004f9a9c();
    _swift_allocError(&DAT_1009d0558,puVar1,0,0);
    *puVar1 = 4;
    _swift_willThrow();
  }
  else {
    (**(code **)(puVar1 + 8))(local_70,param_2,puVar1);
    uStack_9a = (undefined2)local_70._8_8_;
    uStack_98 = SUB86(local_70._8_8_,2);
    local_a2 = (undefined2)local_70._0_8_;
    uStack_a0 = SUB86(local_70._0_8_,2);
    uStack_8a = (undefined2)local_70._24_8_;
    uStack_88 = SUB86(local_70._24_8_,2);
    local_92 = (undefined2)local_70._16_8_;
    uStack_90 = SUB86(local_70._16_8_,2);
    uStack_7a = (undefined2)local_70._40_8_;
    uStack_78 = SUB86(local_70._40_8_,2);
    local_82 = (undefined2)local_70._32_8_;
    uStack_80 = SUB86(local_70._32_8_,2);
    uStack_e6 = CONCAT26(uStack_9a,uStack_a0);
    local_ee = CONCAT26(local_a2,uStack_a8);
    uStack_136 = uStack_a0;
    uStack_130 = uStack_9a;
    uStack_13e = uStack_a8;
    uStack_138 = local_a2;
    uStack_d6 = CONCAT26(uStack_8a,uStack_90);
    local_de = CONCAT26(local_92,uStack_98);
    uStack_126 = uStack_90;
    uStack_120 = uStack_8a;
    local_12e = uStack_98;
    uStack_128 = local_92;
    local_ce = CONCAT26(local_82,uStack_88);
    uStack_116 = uStack_80;
    local_11e = uStack_88;
    uStack_118 = local_82;
    bStack_100 = (byte)param_4 & 1;
    bStack_ff = (byte)((ulong)param_4 >> 8) & 1;
    bStack_fe = (byte)((ulong)param_4 >> 0x10) & 1;
    bStack_fd = (byte)((ulong)param_4 >> 0x18) & 1;
    local_148 = PTR___swiftEmptyArrayStorage_100995ea0;
    uStack_140 = 0;
    uStack_13f = local_71;
    uStack_10e = SUB82(local_70._40_8_,2);
    uStack_10c = SUB84(local_70._40_8_,4);
    uStack_108 = 0;
    uStack_104 = 0;
    local_f8 = PTR___swiftEmptyArrayStorage_100995ea0;
    local_f0 = 0;
    local_ef = local_71;
    uStack_b8 = 0;
    uStack_c6 = uStack_80;
    uStack_c0 = uStack_7a;
    uStack_110 = uStack_7a;
    uStack_be = uStack_78;
    local_b0 = bStack_100;
    local_af = bStack_ff;
    local_ae = bStack_fe;
    local_ad = bStack_fd;
    FUN_1005325b4(&local_148,auStack_198);
    FUN_1004f9adc(&local_f8);
    param_1[5] = CONCAT62(local_11e,uStack_120);
    param_1[4] = CONCAT62(uStack_126,uStack_128);
    param_1[7] = CONCAT44(uStack_10c,CONCAT22(uStack_10e,uStack_110));
    param_1[6] = CONCAT62(uStack_116,uStack_118);
    *(ulong *)((long)param_1 + 0x44) =
         CONCAT17(bStack_fd,CONCAT16(bStack_fe,CONCAT15(bStack_ff,CONCAT14(bStack_100,uStack_104))))
    ;
    *(ulong *)((long)param_1 + 0x3c) = CONCAT44(uStack_108,uStack_10c);
    param_1[1] = CONCAT62(uStack_13e,CONCAT11(uStack_13f,uStack_140));
    *param_1 = local_148;
    param_1[3] = CONCAT62(local_12e,uStack_130);
    param_1[2] = CONCAT62(uStack_136,uStack_138);
  }
  return;
}

