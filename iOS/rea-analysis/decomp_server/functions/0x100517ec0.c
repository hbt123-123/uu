// rea decompile_all
// name: FUN_100517ec0
// address: 0x100517ec0
// body: available
// range: 0x100517ec0-0x10051813f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100517ec0(byte *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  byte *pbVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long unaff_x21;
  byte *pbVar13;
  undefined1 auStack_218 [40];
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  byte *pbStack_1c8;
  byte *pbStack_1c0;
  long local_1b8;
  long local_1b0;
  byte bStack_1a8;
  byte bStack_1a7;
  undefined6 uStack_1a6;
  long local_1a0;
  undefined8 local_198;
  undefined2 local_190;
  undefined6 uStack_18e;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *local_158;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  long lStack_e8;
  long local_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  byte *local_80;
  
  if ((param_1 != (byte *)0x0) && (0 < param_2 - (long)param_1)) {
    pbVar9 = param_1;
    FUN_1004f9c30();
    FUN_1004f9894(param_5,auStack_148);
    local_198 = 0;
    FUN_1004f9894(auStack_148,auStack_218);
    lVar10 = 0;
    FUN_10050ef70();
    _swift_allocObject();
    uVar11 = 0x80;
    _swift_slowAlloc(0x80,0xffffffffffffffff);
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    *(undefined8 *)(lVar10 + 0x18) = 0x80;
    pbVar1 = param_1 + (param_2 - (long)param_1);
    pbStack_1c8 = param_1;
    pbStack_1c0 = pbVar1;
    local_1b8 = lVar10;
    FUN_1004f9894(auStack_218,&local_1f0);
    bStack_1a8 = (byte)param_4 & 1;
    bStack_1a7 = (byte)((ulong)param_4 >> 8) & 1;
    local_1a0 = param_3 + -1;
    local_1b0 = param_3;
    if (SBORROW8(param_3,1)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100518128);
      (*pcVar8)();
    }
    do {
      bVar2 = *param_1;
      if (0x23 < bVar2) break;
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar2 != 0x23) break;
        pbVar13 = param_1 + 1;
        do {
          pbStack_1c8 = pbVar1;
          if (pbVar13 == pbVar1) goto LAB_100517ff8;
          param_1 = pbVar13 + 1;
          bVar2 = *pbVar13;
          pbVar13 = param_1;
        } while (bVar2 != 10 && bVar2 != 0xd);
      }
      else {
        param_1 = param_1 + 1;
      }
      pbStack_1c8 = param_1;
    } while (param_1 != pbVar1);
LAB_100517ff8:
    FUN_1005187f8(auStack_218);
    if (DAT_100aa26d0 != -1) {
      _swift_once(&DAT_100aa26d0,FUN_100566b3c);
    }
    uVar7 = DAT_100b39688;
    uVar6 = DAT_100b39680;
    uVar5 = DAT_100b39678;
    uVar4 = DAT_100b39670;
    uVar3 = DAT_100b39668;
    uVar11 = DAT_100b39660;
    _swift_retain(DAT_100b39660);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
    FUN_1005187f8(auStack_148);
    uStack_188 = uVar11;
    uStack_180 = uVar3;
    local_178 = uVar4;
    local_170 = uVar5;
    uStack_168 = uVar6;
    uStack_160 = uVar7;
    local_158 = &DAT_1009d2420;
    local_190 = 0x100;
    uStack_d8 = CONCAT62(uStack_1a6,CONCAT11(bStack_1a7,bStack_1a8));
    local_e0 = local_1b0;
    uStack_c8 = local_198;
    lStack_d0 = local_1a0;
    uStack_118 = uStack_1e8;
    local_120 = local_1f0;
    uStack_108 = uStack_1d8;
    uStack_110 = uStack_1e0;
    pbStack_f8 = pbStack_1c8;
    local_100 = local_1d0;
    lStack_e8 = local_1b8;
    pbStack_f0 = pbStack_1c0;
    uStack_98 = uVar6;
    local_a0 = uVar5;
    puStack_88 = &DAT_1009d2420;
    uStack_90 = uVar7;
    local_c0 = CONCAT62(uStack_18e,0x100);
    uStack_b8 = uVar11;
    uStack_a8 = uVar4;
    uStack_b0 = uVar3;
    puVar12 = &local_120;
    local_80 = pbVar9;
    FUN_100517a2c();
    if ((unaff_x21 == 0) && (pbStack_f8 != pbStack_f0)) {
      FUN_1004f9b10();
      _swift_allocError(&DAT_1009d1c98,puVar12,0,0);
      *(undefined1 *)puVar12 = 2;
      _swift_willThrow();
    }
    FUN_1004f9bc0(&local_120);
  }
  return;
}

