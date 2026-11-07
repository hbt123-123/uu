// rea decompile_all
// name: FUN_10055be18
// address: 0x10055be18
// body: available
// range: 0x10055be18-0x10055c42b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10055be18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6,long param_7,long param_8,code *param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  code *pcVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  long unaff_x20;
  long unaff_x21;
  long lVar19;
  code *pcVar20;
  undefined1 *puVar21;
  long lVar22;
  undefined1 auStack_1a0 [8];
  long local_198;
  undefined1 *local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  undefined8 *local_168;
  undefined8 local_160;
  code *local_158;
  undefined8 local_150;
  code *local_148;
  long local_140;
  long local_138;
  long local_130;
  undefined8 local_128;
  long local_120;
  undefined8 local_118;
  long local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  code *local_e8;
  long local_e0;
  undefined1 auStack_a0 [16];
  long local_90;
  long lStack_88;
  code *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar22 = *(long *)(param_8 + -8);
  puVar21 = auStack_1a0 + -(*(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_e0 = *(long *)(param_7 + -8);
  local_e8 = param_9;
  lVar19 = (long)puVar21 - (*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0xff;
  local_160 = param_2;
  local_158 = param_5;
  local_150 = param_6;
  _swift_getTupleTypeMetadata2(0xff,param_7,param_8,"key value ",0);
  lVar11 = 0;
  local_120 = lVar10;
  __sSqMa();
  local_138 = *(long *)(lVar11 + -8);
  uVar17 = *(long *)(local_138 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_110 = lVar19 - uVar17;
  local_140 = local_110 - uVar17;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x40);
  local_118 = *(undefined8 *)(unaff_x20 + 0x48);
  local_80 = param_9;
  local_130 = lVar11;
  local_90 = param_7;
  lStack_88 = param_8;
  uStack_78 = param_3;
  local_70 = param_4;
  FUN_10055d904();
  uVar12 = 0;
  __sSDMa(0,param_7,param_8,local_e8);
  local_128 = uVar16;
  _swift_bridgeObjectRetain(uVar16);
  _swift_bridgeObjectRetain(local_118);
  puVar13 = PTR___sSDyxq_GSTsMc_100995788;
  _swift_getWitnessTable(PTR___sSDyxq_GSTsMc_100995788,uVar12);
  pcVar9 = FUN_10050e6c8;
  __sSTsE6sorted2bySay7ElementQzGSbAD_ADtKXE_tKF(FUN_10050e6c8,auStack_a0,uVar12,puVar13);
  local_170 = unaff_x20 + 8;
  pcVar20 = (code *)0x0;
  local_198 = param_7;
  local_190 = puVar21;
  local_188 = lVar19;
  local_180 = lVar22;
  local_178 = param_8;
  local_168 = (undefined8 *)(unaff_x20 + 0x10);
  local_148 = pcVar9;
  while( true ) {
    lVar10 = local_120;
    pcVar9 = local_148;
    pcVar14 = local_148;
    __sSa8endIndexSivg(local_148,local_120);
    if (pcVar20 == pcVar14) {
      uVar16 = 1;
      local_e8 = pcVar20;
    }
    else {
      __sSayxSicig(local_110,pcVar20,pcVar9,lVar10);
      if (SCARRY8((long)pcVar20,1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10055c428);
        (*pcVar9)();
      }
      uVar16 = 0;
      local_e8 = pcVar20 + 1;
    }
    lVar15 = local_110;
    lVar18 = *(long *)(lVar10 + -8);
    (**(code **)(lVar18 + 0x38))(local_110,uVar16,1,lVar10);
    lVar11 = local_140;
    (**(code **)(local_138 + 0x20))(local_140,lVar15,local_130);
    lVar15 = lVar11;
    (**(code **)(lVar18 + 0x30))(lVar11,1,lVar10);
    if ((int)lVar15 == 1) break;
    iVar7 = *(int *)(lVar10 + 0x30);
    (**(code **)(local_e0 + 0x20))(lVar19,lVar11,param_7);
    (**(code **)(lVar22 + 0x20))(puVar21,lVar11 + iVar7,param_8);
    FUN_100557cc0(local_160);
    FUN_1004f9e80(" {\n",3);
    if (DAT_100aa26b8 != -1) {
      _swift_once(&DAT_100aa26b8,FUN_100556110);
    }
    _swift_bridgeObjectRetain(DAT_100aabac0);
    FUN_1004fa13c();
    FUN_10052a5d0(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
    uVar16 = local_128;
    local_168[3] = 0;
    local_168[2] = 0;
    local_168[5] = 0;
    local_168[4] = 0;
    local_168[1] = 0;
    *local_168 = 0;
    if (DAT_100aa26c0 != -1) {
      _swift_once(&DAT_100aa26c0,FUN_100557a18);
    }
    uVar12 = DAT_100aabac8;
    _swift_bridgeObjectRetain(DAT_100aabac8);
    uVar8 = local_118;
    _swift_bridgeObjectRelease(local_118);
    _swift_bridgeObjectRelease(uVar16);
    *(undefined8 *)(unaff_x20 + 0x40) = uVar12;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    (*local_158)();
    if (unaff_x21 != 0) {
      _swift_bridgeObjectRelease(local_148);
      FUN_10052a5d0(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
      _swift_bridgeObjectRelease(uVar8);
      _swift_bridgeObjectRelease(uVar16);
      (**(code **)(lVar22 + 8))(puVar21,param_8);
      (**(code **)(local_e0 + 8))(lVar19,param_7);
      return;
    }
    uVar12 = *(undefined8 *)(unaff_x20 + 0x48);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRelease(uVar12);
    *(undefined8 *)(unaff_x20 + 0x48) = uVar8;
    uVar12 = *(undefined8 *)(unaff_x20 + 0x40);
    _swift_bridgeObjectRetain(uVar16);
    _swift_bridgeObjectRelease(uVar12);
    *(undefined8 *)(unaff_x20 + 0x40) = uVar16;
    uStack_f0 = *(undefined8 *)(unaff_x20 + 0x10);
    local_f8 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar16 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_100 = *(undefined8 *)(unaff_x20 + 0x30);
    local_108 = *(undefined8 *)(unaff_x20 + 0x38);
    FUN_10055d904(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
    FUN_10052a5d0(uStack_f0,local_f8,uVar16,uVar12,uStack_100,local_108);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
    *(undefined8 *)(unaff_x20 + 0x18) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
    *(undefined8 *)(unaff_x20 + 0x28) = uVar5;
    *(undefined8 *)(unaff_x20 + 0x30) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x38) = uVar6;
    lVar19 = *(long *)(unaff_x20 + 8);
    uVar17 = *(ulong *)(lVar19 + 0x10);
    if (uVar17 < 2) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10055c42c);
      (*pcVar9)();
    }
    lVar22 = lVar19;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)lVar22 == 0) || (*(ulong *)(lVar19 + 0x18) >> 1 < uVar17 - 2)) {
      FUN_100506f84();
      lVar19 = lVar22;
    }
    lVar10 = local_e0;
    pcVar20 = local_e8;
    puVar21 = local_190;
    param_7 = local_198;
    _memmove((void *)(lVar19 + uVar17 + 0x1e),(void *)(lVar19 + uVar17 + 0x20),
             *(long *)(lVar19 + 0x10) - uVar17);
    *(long *)(lVar19 + 0x10) = *(long *)(lVar19 + 0x10) + -2;
    *(long *)(unaff_x20 + 8) = lVar19;
    _swift_bridgeObjectRetain(lVar19);
    FUN_1004fa13c();
    FUN_1004f9e80("}\n",2);
    param_8 = local_178;
    lVar22 = local_180;
    (**(code **)(local_180 + 8))(puVar21,local_178);
    lVar19 = local_188;
    (**(code **)(lVar10 + 8))(local_188,param_7);
  }
  FUN_10052a5d0(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
  _swift_bridgeObjectRelease(local_148);
  _swift_bridgeObjectRelease(local_118);
  _swift_bridgeObjectRelease(local_128);
  return;
}

