// rea decompile_all
// name: FUN_10055189c
// address: 0x10055189c
// body: available
// range: 0x10055189c-0x100552063 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100551f48) */
/* WARNING: Removing unreachable block (ram,0x000100551e4c) */

void FUN_10055189c(undefined8 param_1,undefined *param_2,long param_3)

{
  char *pcVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined1 *puVar14;
  long lVar15;
  ulong uVar16;
  code *pcVar17;
  byte *pbVar18;
  long lVar19;
  long lVar20;
  long unaff_x20;
  long unaff_x21;
  long lVar21;
  long lVar22;
  byte *pbVar23;
  code *pcVar24;
  long lVar25;
  code *pcVar26;
  undefined1 auStack_2c0 [8];
  undefined1 auStack_268 [24];
  undefined8 local_250;
  undefined8 uStack_248;
  ulong local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined1 uStack_228;
  undefined7 uStack_227;
  byte *pbStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined1 local_1f0;
  undefined1 uStack_1ef;
  undefined6 uStack_1ee;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined *local_1b8;
  undefined1 auStack_1a8 [88];
  undefined8 local_150;
  undefined8 uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  byte *pbStack_128;
  byte *pbStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar25 = *(long *)(param_2 + -8);
  puVar14 = auStack_2c0 + -(*(long *)(lVar25 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  __sSqMa();
  lVar15 = *(long *)(lVar6 + -8);
  uVar16 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar19 = (long)puVar14 - uVar16;
  lVar20 = lVar19 - uVar16;
  lVar22 = lVar20 - uVar16;
  lVar21 = lVar22 - uVar16;
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 != *(char **)(unaff_x20 + 0x30)) && (*pcVar1 == ':')) {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_100560bb8();
  }
  pcVar17 = *(code **)(lVar15 + 0x10);
  (*pcVar17)(lVar21,param_1,lVar6);
  pcVar26 = *(code **)(lVar25 + 0x30);
  lVar7 = lVar21;
  (*pcVar26)(lVar21,1,param_2);
  pcVar24 = *(code **)(lVar15 + 8);
  (*pcVar24)(lVar21,lVar6);
  uVar5 = (undefined1)lVar21;
  if ((int)lVar7 == 1) {
    (**(code **)(param_3 + 0x10))(lVar22,param_2);
    (**(code **)(lVar25 + 0x38))(lVar22,0,1,param_2);
    uVar8 = param_1;
    (**(code **)(lVar15 + 0x28))(param_1,lVar22,lVar6);
    uVar5 = (undefined1)uVar8;
  }
  FUN_10055db34();
  if (unaff_x21 != 0) {
    return;
  }
  FUN_1004f9b50(unaff_x20,auStack_1a8);
  local_1f8 = 0;
  FUN_1004f9b50(auStack_1a8,&local_250);
  uStack_1ef = 0;
  puVar9 = param_2;
  local_1f0 = uVar5;
  _swift_conformsToProtocol(param_2,&TargetProtocolDescriptor_10090176c);
  if (puVar9 == (undefined *)0x0) {
    FUN_1004f9b10();
    _swift_allocError(&DAT_1009d1c98,puVar9,0,0);
    *puVar9 = 6;
    _swift_willThrow();
    FUN_1004f9b8c(auStack_1a8);
    FUN_1004f9b8c(&local_250);
    return;
  }
  (**(code **)(puVar9 + 8))(&local_a0,param_2,puVar9);
  FUN_1004f9b8c(auStack_1a8);
  uStack_1d0 = uStack_88;
  local_1d8 = uStack_90;
  uStack_1e0 = uStack_98;
  uStack_1e8 = local_a0;
  uStack_1c0 = uStack_78;
  local_1c8 = local_80;
  uStack_108 = uStack_208;
  local_110 = local_210;
  uStack_f8 = local_1f8;
  uStack_100 = uStack_200;
  uStack_148 = uStack_248;
  local_150 = local_250;
  uStack_138 = uStack_238;
  uStack_140 = local_240;
  pbStack_128 = (byte *)CONCAT71(uStack_227,uStack_228);
  local_130 = local_230;
  uStack_118 = uStack_218;
  pbStack_120 = pbStack_220;
  uStack_c8 = local_80;
  local_d0 = uStack_88;
  uStack_c0 = uStack_78;
  local_f0 = CONCAT62(uStack_1ee,CONCAT11(uStack_1ef,local_1f0));
  uStack_e8 = local_a0;
  uStack_d8 = uStack_90;
  uStack_e0 = uStack_98;
  local_1b8 = param_2;
  puStack_b8 = param_2;
  local_b0 = param_3;
  if (param_2 == &DAT_1009d2420) {
    (*pcVar17)(lVar20,param_1,lVar6);
    lVar21 = lVar20;
    (*pcVar26)(lVar20,1,&DAT_1009d2420);
    if ((int)lVar21 == 1) {
      (*pcVar24)(lVar20,lVar6);
    }
    else {
      (**(code **)(lVar25 + 0x20))(puVar14,lVar20,&DAT_1009d2420);
      _swift_dynamicCast(&local_250,puVar14,&DAT_1009d2420,&DAT_1009d2420,7);
      pbVar4 = pbStack_120;
      uVar3 = uStack_248;
      uVar8 = local_250;
      if (local_240 != 0) {
        do {
          if ((pbStack_128 == pbStack_120) || (bVar2 = *pbStack_128, 0x23 < bVar2))
          goto LAB_100551c68;
          if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
            if ((ulong)bVar2 != 0x23) goto LAB_100551c68;
            pbVar10 = pbStack_128 + 1;
            do {
              pbStack_128 = pbStack_120;
              if (pbVar10 == pbStack_120) break;
              pbStack_128 = pbVar10 + 1;
              bVar2 = *pbVar10;
              pbVar10 = pbStack_128;
            } while (bVar2 != 10 && bVar2 != 0xd);
          }
          else {
            pbStack_128 = pbStack_128 + 1;
          }
        } while( true );
      }
    }
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x100552064);
    (*pcVar17)();
  }
  (*pcVar26)(param_1,1,param_2);
  if ((int)param_1 == 1) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x100552054);
    (*pcVar17)();
  }
  (**(code **)(param_3 + 0x40))(&local_150,&DAT_1009d1a08,&PTR_PTR_1009d1a30,param_2);
  goto LAB_100552018;
LAB_100551ef8:
  uVar11 = local_240;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar11 & 1) == 0) {
    uVar12 = 0;
    FUN_1004f71ec(0);
    _swift_allocObject();
    FUN_1004f668c(local_240,uVar12);
    uVar16 = local_240;
  }
  FUN_1004f7600(pbVar10,lVar21,&local_150);
  _swift_bridgeObjectRelease(lVar21);
  goto LAB_100551f68;
LAB_100551c68:
  uVar16 = local_240;
  if ((pbStack_128 != pbStack_120) && (*pbStack_128 == 0x5b)) {
    pbVar10 = pbStack_128 + 1;
    pbVar18 = pbVar10;
    if ((pbVar10 != pbStack_120) && (0xffffffe5 < (*pbVar10 & 0xffffffdf) - 0x5b)) {
      for (pbVar23 = pbStack_128 + 2; pbVar18 = pbVar23, pbVar23 != pbStack_120;
          pbVar23 = pbVar23 + 1) {
        bVar2 = *pbVar23;
        if (((bVar2 - 0x3a < 0xfffffff6 && (bVar2 & 0xffffffdf) - 0x5b < 0xffffffe6) &&
            (uVar13 = (uint)bVar2, 1 < uVar13 - 0x2e)) && (uVar13 != 0x5f)) {
          if (uVar13 != 0x5d) goto LAB_100551e54;
          break;
        }
      }
      if ((pbVar23 != pbStack_120) && (*pbVar23 == 0x5d)) {
        lVar21 = (long)pbVar23 - (long)pbVar10;
        pbStack_128 = pbVar23;
        FUN_10054c680();
        pbVar18 = pbStack_128;
        if (lVar21 != 0) {
          pbStack_128 = pbVar23 + 1;
          do {
            if ((pbStack_128 == pbVar4) || (bVar2 = *pbStack_128, 0x23 < bVar2)) goto LAB_100551ef8;
            if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
              if ((ulong)bVar2 != 0x23) goto LAB_100551ef8;
              pbVar18 = pbStack_128 + 1;
              do {
                pbStack_128 = pbVar4;
                if (pbVar18 == pbVar4) break;
                pbStack_128 = pbVar18 + 1;
                bVar2 = *pbVar18;
                pbVar18 = pbStack_128;
              } while (bVar2 != 10 && bVar2 != 0xd);
            }
            else {
              pbStack_128 = pbStack_128 + 1;
            }
          } while( true );
        }
      }
    }
LAB_100551e54:
    pbStack_128 = pbVar18;
    FUN_1004f9b10();
    _swift_allocError(&DAT_1009d1c98,pbVar10,0,0);
    *pbVar10 = 0;
    _swift_willThrow();
    FUN_1004f9bc0(&local_150);
    FUN_10008f148(uVar8,uVar3,local_240);
    return;
  }
  uVar11 = local_240;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar11 & 1) == 0) {
    uVar12 = 0;
    FUN_1004f71ec(0);
    _swift_allocObject();
    FUN_1004f668c(local_240,uVar12);
    uVar16 = local_240;
  }
  _swift_beginAccess(uVar16 + 0x10,auStack_1a8,1,0);
  uVar12 = *(undefined8 *)(uVar16 + 0x18);
  *(undefined8 *)(uVar16 + 0x10) = 0;
  *(undefined8 *)(uVar16 + 0x18) = 0xe000000000000000;
  _swift_bridgeObjectRelease(uVar12);
  uVar11 = uVar16;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar11 & 1) == 0) {
    uVar12 = 0;
    FUN_1004f71ec(0);
    _swift_allocObject();
    FUN_1004f668c(uVar16,uVar12);
  }
  uStack_248 = 0xc000000000000000;
  local_250 = 0;
  uStack_228 = 0;
  _swift_beginAccess(uVar16 + 0x20,auStack_268,0x21,0);
  FUN_1004f99e8(&local_250,uVar16 + 0x20);
  _swift_endAccess(auStack_268);
  uVar11 = uVar16;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar11 & 1) == 0) {
    uVar12 = 0;
    FUN_1004f71ec(0);
    _swift_allocObject();
    FUN_1004f668c(uVar16,uVar12);
  }
  FUN_100518280(uVar16,&local_150);
LAB_100551f68:
  if (uVar16 == 0) {
    pcVar17 = *(code **)(lVar25 + 0x38);
  }
  else {
    local_250 = uVar8;
    uStack_248 = uVar3;
    FUN_100008184(uVar8,uVar3);
    _swift_retain(uVar16);
    _swift_dynamicCast(lVar19,&local_250,&DAT_1009d2420,&DAT_1009d2420,7);
    pcVar17 = *(code **)(lVar25 + 0x38);
  }
  (*pcVar17)(lVar19,uVar16 == 0,1,&DAT_1009d2420);
  (**(code **)(lVar15 + 0x28))(param_1,lVar19,lVar6);
  FUN_10008f148(uVar8,uVar3,uVar16);
LAB_100552018:
  FUN_1004f9bf4(&local_150,unaff_x20);
  FUN_1004f9bc0(&local_150);
  return;
}

