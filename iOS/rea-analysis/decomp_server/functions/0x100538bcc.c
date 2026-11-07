// rea decompile_all
// name: FUN_100538bcc
// address: 0x100538bcc
// body: available
// range: 0x100538bcc-0x100538edb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100538bcc(undefined8 param_1,uint param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  code *pcVar8;
  undefined1 auStack_170 [8];
  ulong local_168;
  ulong local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_11c;
  ulong local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_cc;
  ulong local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_7c;
  
  lVar7 = *(long *)(*(long *)(param_3 + -8) + 0x40);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(auStack_170 + -(lVar7 + 0xfU & 0xfffffffffffffff0));
  puVar1 = &DAT_100aaa138;
  FUN_100004bb4(&DAT_100aaa138,&DAT_1008358e0);
  puVar2 = &local_160;
  _swift_dynamicCast(puVar2,auStack_170 + -(lVar7 + 0xfU & 0xfffffffffffffff0),param_3,puVar1,6);
  if ((int)puVar2 == 0) {
    local_140 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_158 = 0;
    local_160 = 0;
    FUN_100040bb4(&local_160,&DAT_100aaa140,&DAT_100837af0);
    FUN_100532378(&local_c0,param_3,param_5,param_2 & 0x1010101);
    if (unaff_x21 == 0) {
      local_e0 = uStack_90;
      uStack_cc = uStack_7c;
      uStack_f8 = uStack_a8;
      local_100 = uStack_b0;
      uStack_e8 = uStack_98;
      local_f0 = local_a0;
      uStack_108 = uStack_b8;
      local_110 = local_c0;
      FUN_1005320b4();
      (**(code **)(param_5 + 0x48))(&local_110,&DAT_1009d06b8,&PTR_PTR_1009d06d8,param_3,param_5);
      uVar3 = local_110;
      uVar6 = local_110;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar5 = uVar3;
      if ((uVar6 & 1) == 0) {
        uVar5 = 0;
        FUN_100506f84(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
      }
      uVar3 = *(ulong *)(uVar5 + 0x10);
      uVar6 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_100506f84(uVar6,uVar3 + 1,1,uVar5);
      }
      *(ulong *)(uVar6 + 0x10) = uVar3 + 1;
      *(undefined1 *)(uVar6 + uVar3 + 0x20) = 0x7d;
      uStack_108 = CONCAT62(uStack_108._2_6_,0x2c);
      pcVar8 = *(code **)(param_6 + 0x10);
      local_168 = uVar6;
      local_110 = uVar6;
      _swift_bridgeObjectRetain(uVar6);
      puVar1 = &DAT_100aaa108;
      FUN_100004bb4(&DAT_100aaa108,&DAT_1008358d0);
      puVar4 = puVar1;
      FUN_100539610();
      (*pcVar8)(param_1,&local_168,puVar1,puVar4,param_4,param_6);
      uStack_138 = uStack_e8;
      local_140 = local_f0;
      local_130 = local_e0;
      uStack_11c = uStack_cc;
      uStack_148 = uStack_f8;
      local_150 = local_100;
      uStack_158 = uStack_108;
      local_160 = local_110;
      FUN_1004f9adc(&local_160);
    }
  }
  else {
    FUN_1000a0074(&local_160,&local_110);
    FUN_10003f030(&local_110,uStack_f8);
    uVar3 = (ulong)(param_2 & 0x1010101);
    (**(code **)(local_f0 + 8))(uVar3,uStack_f8,local_f0);
    if (unaff_x21 == 0) {
      pcVar8 = *(code **)(param_6 + 0x10);
      local_160 = uVar3;
      FUN_100539660();
      (*pcVar8)(param_1,&local_160,PTR___sSS8UTF8ViewVN_1009957e0,uVar3,param_4,param_6);
    }
    FUN_10003f094(&local_110);
  }
  return;
}

