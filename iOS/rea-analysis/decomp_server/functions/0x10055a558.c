// rea decompile_all
// name: FUN_10055a558
// address: 0x10055a558
// body: available
// range: 0x10055a558-0x10055aaa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10055a558(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *unaff_x20;
  long unaff_x21;
  code *pcVar11;
  long lVar12;
  undefined1 auStack_1c0 [8];
  undefined8 *local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  undefined1 *local_198;
  long local_190;
  undefined8 local_188;
  long local_180;
  long local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  long local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar12 = *(long *)(param_3 + -8);
  uVar9 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_198 = auStack_1c0 + -uVar9;
  local_1a0 = (long)local_198 - uVar9;
  local_190 = local_1a0 - uVar9;
  uStack_d8 = unaff_x20[7];
  local_e0 = unaff_x20[6];
  uStack_c8 = unaff_x20[9];
  local_d0 = unaff_x20[8];
  uStack_f8 = unaff_x20[3];
  uStack_100 = unaff_x20[2];
  uStack_e8 = unaff_x20[5];
  local_f0 = unaff_x20[4];
  local_c0 = *(undefined1 *)(unaff_x20 + 10);
  uStack_108 = unaff_x20[1];
  local_110 = *unaff_x20;
  local_1a8 = param_4;
  local_b0 = uStack_c8;
  local_a8 = local_d0;
  local_a0 = uStack_100;
  uStack_98 = uStack_f8;
  uStack_90 = local_f0;
  uStack_88 = uStack_e8;
  local_80 = local_e0;
  uStack_78 = uStack_d8;
  FUN_100557a54();
  lVar4 = param_3;
  local_188 = param_2;
  _swift_conformsToProtocol(param_3,&TargetProtocolDescriptor_10090176c);
  if ((param_3 == 0) || (lVar4 == 0)) {
    FUN_10007f314(&local_a8,&local_140,&DAT_100aabad8,&DAT_1008388b8);
    FUN_10007f314(&local_b0,&local_140,&DAT_100aabae0,&DAT_1008388c0);
    local_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    local_120 = 0;
    uStack_118 = 0;
  }
  else {
    pcVar11 = *(code **)(lVar4 + 8);
    FUN_10007f314(&local_a8,&local_140,&DAT_100aabad8,&DAT_1008388b8);
    FUN_10007f314(&local_b0,&local_140,&DAT_100aabae0,&DAT_1008388c0);
    (*pcVar11)(&local_140,param_3,lVar4);
  }
  unaff_x20[3] = uStack_138;
  unaff_x20[2] = local_140;
  unaff_x20[5] = uStack_128;
  unaff_x20[4] = uStack_130;
  unaff_x20[7] = uStack_118;
  unaff_x20[6] = local_120;
  puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1005b9e0c();
  FUN_100040bb4(&local_a8,&DAT_100aabad8,&DAT_1008388b8);
  unaff_x20[8] = puVar5;
  uVar6 = 0;
  local_178 = param_1;
  __sSaMa(0,param_3);
  _swift_bridgeObjectRetain(param_1);
  puVar5 = &DAT_100aab448;
  FUN_100004bb4(&DAT_100aab448,&DAT_100837b00);
  puVar7 = &local_170;
  _swift_dynamicCast(puVar7,&local_178,uVar6,puVar5,0xe);
  lVar4 = local_150;
  uVar6 = local_158;
  if ((int)puVar7 == 0) {
    local_150 = 0;
    uStack_168 = 0;
    local_170 = 0;
    local_158 = 0;
    local_160 = 0;
    FUN_100040bb4(&local_170,&DAT_100aab450,&DAT_1008388b0);
    FUN_100040bb4(&local_b0,&DAT_100aabae0,&DAT_1008388c0);
    uVar6 = 0;
  }
  else {
    FUN_10003f030(&local_170,local_158);
    (**(code **)(lVar4 + 0x10))(uVar6,lVar4);
    FUN_10003f094(&local_170);
    FUN_100040bb4(&local_b0,&DAT_100aabae0,&DAT_1008388c0);
  }
  lVar4 = local_1a0;
  local_1b8 = unaff_x20 + 9;
  *local_1b8 = uVar6;
  lVar10 = param_1;
  __sSa8endIndexSivg(param_1,param_3);
  if (lVar10 != 0) {
    lVar10 = 0;
    uVar6 = uStack_108;
    local_1b0 = lVar12;
    do {
      lVar8 = local_190;
      __sSayxSicig(local_190,lVar10,param_1,param_3);
      if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10055aa64);
        (*pcVar11)();
      }
      local_180 = lVar10 + 1;
      (**(code **)(lVar12 + 0x20))(lVar4,lVar8,param_3);
      _swift_bridgeObjectRetain(uVar6);
      FUN_1004fa13c();
      _swift_bridgeObjectRetain(local_188);
      FUN_1004fa13c();
      FUN_1004f9e80(" {\n",3);
      if (DAT_100aa26b8 != -1) {
        _swift_once(&DAT_100aa26b8,FUN_100556110);
      }
      _swift_bridgeObjectRetain(DAT_100aabac0);
      FUN_1004fa13c();
      puVar1 = local_198;
      (**(code **)(lVar12 + 0x10))(local_198,lVar4,param_3);
      puVar7 = &local_170;
      _swift_dynamicCast(puVar7,puVar1,param_3,&DAT_1009d2420,6);
      uVar3 = local_160;
      uVar2 = uStack_168;
      uVar6 = local_170;
      if ((int)puVar7 == 0) {
        (**(code **)(local_1a8 + 0x48))(unaff_x20,&DAT_1009d1ef8,&PTR_PTR_1009d1f20,param_3);
        if (unaff_x21 != 0) {
          _swift_unexpectedError
                    (unaff_x21,"SwiftProtobuf/TextFormatEncodingVisitor.swift",0x2d,1,0x1ed);
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10055aaa8);
          (*pcVar11)();
        }
      }
      else {
        FUN_1004f79f4(unaff_x20);
        FUN_1005735b0(unaff_x20,uVar6,uVar2);
        if (unaff_x21 != 0) {
          _swift_unexpectedError
                    (unaff_x21,"SwiftProtobuf/Google_Protobuf_Any+Extensions.swift",0x32,1,0x84);
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10055aa88);
          (*pcVar11)();
        }
        FUN_100006cdc(uVar6,uVar2);
        _swift_release(uVar3);
        lVar4 = local_1a0;
        lVar12 = local_1b0;
      }
      if (*(ulong *)(unaff_x20[1] + 0x10) < 2) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10055aa68);
        (*pcVar11)();
      }
      FUN_10055740c(*(ulong *)(unaff_x20[1] + 0x10) - 2);
      uVar6 = unaff_x20[1];
      _swift_bridgeObjectRetain(uVar6);
      FUN_1004fa13c();
      FUN_1004f9e80("}\n",2);
      (**(code **)(lVar12 + 8))(lVar4,param_3);
      lVar8 = param_1;
      __sSa8endIndexSivg(param_1,param_3);
      lVar10 = lVar10 + 1;
    } while (local_180 != lVar8);
  }
  _swift_bridgeObjectRelease(local_188);
  FUN_100128b30(&local_b0,local_1b8,&DAT_100aabae0,&DAT_1008388c0);
  _swift_bridgeObjectRelease(unaff_x20[8]);
  unaff_x20[8] = local_a8;
  FUN_100128b30(&local_a0,unaff_x20 + 2,&DAT_100aabae8,&DAT_1008388c8);
  return;
}

