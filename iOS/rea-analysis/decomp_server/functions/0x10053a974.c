// rea decompile_all
// name: FUN_10053a974
// address: 0x10053a974
// body: available
// range: 0x10053a974-0x10053ac23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10053a974(byte *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined1 *param_7,long param_8)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  long unaff_x21;
  undefined1 auStack_248 [40];
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  byte *pbStack_1f8;
  byte *pbStack_1f0;
  long local_1e8;
  long local_1e0;
  byte bStack_1d8;
  byte bStack_1d7;
  undefined6 uStack_1d6;
  long local_1d0;
  undefined8 local_1c8;
  undefined2 local_1c0;
  undefined6 uStack_1be;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 *local_188;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  byte *pbStack_128;
  byte *pbStack_120;
  long lStack_118;
  long local_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_b8;
  long local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if ((param_1 != (byte *)0x0) && (0 < param_2 - (long)param_1)) {
    FUN_1004f9894(param_5,auStack_178);
    local_1c8 = 0;
    FUN_1004f9894(auStack_178,auStack_248);
    lVar4 = 0;
    FUN_10050ef70();
    _swift_allocObject();
    uVar5 = 0x80;
    _swift_slowAlloc(0x80,0xffffffffffffffff);
    *(undefined8 *)(lVar4 + 0x10) = uVar5;
    *(undefined8 *)(lVar4 + 0x18) = 0x80;
    pbVar1 = param_1 + (param_2 - (long)param_1);
    pbStack_1f8 = param_1;
    pbStack_1f0 = pbVar1;
    local_1e8 = lVar4;
    FUN_1004f9894(auStack_248,&local_220);
    bStack_1d8 = (byte)param_4 & 1;
    bStack_1d7 = (byte)((ulong)param_4 >> 8) & 1;
    local_1d0 = param_3 + -1;
    local_1e0 = param_3;
    if (SBORROW8(param_3,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10053ac24);
      (*pcVar3)();
    }
    do {
      bVar2 = *param_1;
      if (0x23 < bVar2) break;
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar2 != 0x23) break;
        pbVar8 = param_1 + 1;
        do {
          pbStack_1f8 = pbVar1;
          if (pbVar8 == pbVar1) goto LAB_10053aaa8;
          param_1 = pbVar8 + 1;
          bVar2 = *pbVar8;
          pbVar8 = param_1;
        } while (bVar2 != 10 && bVar2 != 0xd);
      }
      else {
        param_1 = param_1 + 1;
      }
      pbStack_1f8 = param_1;
    } while (param_1 != pbVar1);
LAB_10053aaa8:
    FUN_1005187f8(auStack_248);
    puVar6 = param_7;
    _swift_conformsToProtocol(param_7,&TargetProtocolDescriptor_10090176c);
    if (puVar6 == (undefined1 *)0x0 || param_7 == (undefined1 *)0x0) {
      FUN_1004f9b10();
      _swift_allocError(&DAT_1009d1c98,puVar6,0,0);
      *puVar6 = 6;
      _swift_willThrow();
      FUN_1005187f8(auStack_178);
      FUN_1004f9b8c(&local_220);
    }
    else {
      (**(code **)(puVar6 + 8))(&local_a0,param_7,puVar6);
      FUN_1005187f8(auStack_178);
      uStack_1a0 = uStack_88;
      local_1a8 = uStack_90;
      uStack_1b0 = uStack_98;
      uStack_1b8 = local_a0;
      uStack_190 = uStack_78;
      local_198 = local_80;
      local_1c0 = 0x100;
      uStack_108 = CONCAT62(uStack_1d6,CONCAT11(bStack_1d7,bStack_1d8));
      local_110 = local_1e0;
      uStack_f8 = local_1c8;
      lStack_100 = local_1d0;
      uStack_148 = uStack_218;
      local_150 = local_220;
      uStack_138 = uStack_208;
      uStack_140 = uStack_210;
      pbStack_128 = pbStack_1f8;
      local_130 = local_200;
      lStack_118 = local_1e8;
      pbStack_120 = pbStack_1f0;
      uStack_c8 = local_80;
      local_d0 = uStack_88;
      uStack_c0 = uStack_78;
      local_f0 = CONCAT62(uStack_1be,0x100);
      uStack_e8 = local_a0;
      uStack_d8 = uStack_90;
      uStack_e0 = uStack_98;
      puVar7 = &local_150;
      local_188 = param_7;
      puStack_b8 = param_7;
      local_b0 = param_8;
      (**(code **)(param_8 + 0x40))(puVar7,&DAT_1009d1a08,&PTR_PTR_1009d1a30,param_7,param_8);
      if ((unaff_x21 == 0) && (pbStack_128 != pbStack_120)) {
        FUN_1004f9b10();
        _swift_allocError(&DAT_1009d1c98,puVar7,0,0);
        *(undefined1 *)puVar7 = 2;
        _swift_willThrow();
      }
      FUN_1004f9bc0(&local_150);
    }
  }
  return;
}

