// rea decompile_all
// name: FUN_1005c8e78
// address: 0x1005c8e78
// body: available
// range: 0x1005c8e78-0x1005c9587 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005c8e78(undefined1 *param_1,double param_2,byte *param_3,undefined8 param_4,ulong param_5
                  ,ulong param_6,ulong param_7,undefined8 *param_8,byte *param_9,ulong param_10,
                  undefined8 param_11,long param_12,long param_13)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  long local_f0 [2];
  code *local_e0;
  uint local_d8;
  uint local_d4;
  undefined8 *local_d0;
  long local_c8;
  long local_c0;
  undefined1 *local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  ulong uStack_68;
  
  lVar6 = 0;
  local_b8 = param_1;
  local_b0 = param_10;
  local_a8 = param_7;
  local_a0 = param_5;
  __s10Foundation3URLVMa();
  local_90 = *(long *)(lVar6 + -8);
  local_88 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_90 + 0x40));
  puVar10 = (undefined8 *)((long)local_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar7 = &DAT_100aad5f8;
  puVar14 = &DAT_10083eb90;
  FUN_100004bb4();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar6 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_c8 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar6 = lVar6 - extraout_x12;
  local_c0 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar16 = lVar6 - extraout_x12_00;
  bVar1 = *param_3;
  bVar2 = *param_9;
  __s10Foundation3URLV06isFileB0Sbvg();
  local_98 = param_4;
  if (((ulong)puVar7 & 1) == 0) {
    _swift_bridgeObjectRelease(param_6);
    puVar10 = param_8;
LAB_1005c9158:
    _swift_bridgeObjectRelease();
    lVar6 = local_90;
    lVar17 = local_88;
  }
  else {
    local_d4 = (uint)bVar1;
    local_d0 = param_8;
    __s10Foundation3URLV4pathSSvg();
    _swift_bridgeObjectRelease(puVar14);
    uVar8 = (ulong)puVar7 & 0xffffffffffff;
    if (((ulong)puVar14 & 0x2000000000000000) != 0) {
      uVar8 = (ulong)puVar14 >> 0x38 & 0xf;
    }
    if (uVar8 == 0) {
      _swift_bridgeObjectRelease(param_6);
      puVar10 = local_d0;
      goto LAB_1005c9158;
    }
    local_d8 = (uint)bVar2;
    FUN_1005c8dc8(param_11,uVar16);
    lVar17 = local_88;
    lVar6 = local_90;
    pcVar15 = *(code **)(local_90 + 0x30);
    uVar8 = uVar16;
    (*pcVar15)(uVar16,1,local_88);
    if ((int)uVar8 == 1) {
LAB_1005c9060:
      uVar11 = local_a0;
      uVar16 = local_a0 & 0xffffffffffff;
      if ((param_6 & 0x2000000000000000) != 0) {
        uVar16 = param_6 >> 0x38 & 0xf;
      }
      if (uVar16 == 0) {
LAB_1005c90f8:
        _swift_bridgeObjectRelease(param_6);
        puVar10 = local_d0;
        _swift_bridgeObjectRelease();
        FUN_1005c958c();
        _swift_allocError(&DAT_1009d8730,puVar10,0,0);
        uVar18 = 1;
      }
      else {
        local_70 = local_a0;
        local_80 = 0x2f;
        uStack_78 = 0xe100000000000000;
        uStack_68 = param_6;
        FUN_1005c95cc();
        puVar10 = &local_80;
        __sSy10FoundationE8containsySbqd__SyRd__lF
                  (puVar10,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,uVar8,uVar8);
        lVar6 = local_90;
        if (((ulong)puVar10 & 1) != 0) goto LAB_1005c90f8;
        local_70 = uVar11;
        local_80 = 0x5c;
        uStack_78 = 0xe100000000000000;
        puVar10 = &local_80;
        uStack_68 = param_6;
        __sSy10FoundationE8containsySbqd__SyRd__lF
                  (puVar10,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,uVar8,uVar8);
        lVar6 = local_90;
        if (((ulong)puVar10 & 1) != 0) goto LAB_1005c90f8;
        if ((param_6 >> 0x3c & 1) == 0) {
          if (0x80 < uVar16) goto LAB_1005c90f8;
        }
        else {
          __sSS8UTF8ViewV13_foreignCountSiyF(uVar11,param_6);
          if (0x80 < (long)uVar11) goto LAB_1005c90f8;
        }
        puVar10 = local_d0;
        uVar16 = local_a8;
        FUN_1005c96d0(local_a8,local_d0);
        lVar17 = local_88;
        uVar18 = local_98;
        puVar4 = local_b8;
        if ((uVar16 & 1) != 0) {
          if (local_b0 < 10) {
            local_e0 = pcVar15;
            if (param_12 < 0) {
              _swift_bridgeObjectRelease(param_6);
              _swift_bridgeObjectRelease();
              FUN_1005c958c();
              _swift_allocError(&DAT_1009d8730,puVar10,0,0);
              puVar10[1] = 4;
              *puVar10 = 0;
            }
            else if (param_13 < 0) {
              _swift_bridgeObjectRelease(param_6);
              _swift_bridgeObjectRelease();
              FUN_1005c958c();
              _swift_allocError(&DAT_1009d8730,puVar10,0,0);
              puVar10[1] = 5;
              *puVar10 = 0;
            }
            else {
              if (((((ulong)ABS(param_2) < 0x7ff0000000000000) && (86400.0 <= param_2)) &&
                  (param_2 < 9.223372036854776e+18)) && ((double)(long)param_2 == param_2)) {
                local_f0[0] = param_12;
                local_f0[1] = param_13;
                *local_b8 = (char)local_d4;
                lVar12 = 0;
                FUN_1005c8c98();
                __s10Foundation3URLV016standardizedFileB0ACvg(puVar4 + *(int *)(lVar12 + 0x14));
                iVar3 = *(int *)(lVar12 + 0x18);
                *(ulong *)(puVar4 + iVar3) = local_a0;
                *(ulong *)((long)(puVar4 + iVar3) + 8) = param_6;
                uVar16 = local_a8;
                puVar9 = puVar10;
                __sSS10lowercasedSSyF();
                _swift_bridgeObjectRelease(puVar10);
                lVar6 = local_c8;
                iVar3 = *(int *)(lVar12 + 0x1c);
                *(ulong *)(puVar4 + iVar3) = uVar16;
                *(undefined8 **)((long)(puVar4 + iVar3) + 8) = puVar9;
                puVar4[*(int *)(lVar12 + 0x20)] = (char)local_d8;
                *(ulong *)(puVar4 + *(int *)(lVar12 + 0x24)) = local_b0;
                local_a0 = lVar12;
                FUN_1005c8dc8(param_11,local_c8);
                lVar13 = lVar6;
                (*local_e0)(lVar6,1,lVar17);
                lVar12 = local_c0;
                bVar5 = (int)lVar13 != 1;
                if (bVar5) {
                  __s10Foundation3URLV016standardizedFileB0ACvg(local_c0);
                  FUN_100040bb4(param_11,&DAT_100aad5f8,&DAT_10083eb90);
                  lVar13 = local_90;
                  pcVar15 = *(code **)(local_90 + 8);
                  (*pcVar15)(uVar18,lVar17);
                  (*pcVar15)(lVar6,lVar17);
                }
                else {
                  FUN_100040bb4(param_11,&DAT_100aad5f8,&DAT_10083eb90);
                  lVar13 = local_90;
                  (**(code **)(local_90 + 8))(uVar18,lVar17);
                  FUN_100040bb4(lVar6,&DAT_100aad5f8,&DAT_10083eb90);
                  lVar12 = local_c0;
                }
                lVar6 = local_f0[0];
                (**(code **)(lVar13 + 0x38))(lVar12,!bVar5,1,lVar17);
                uVar16 = local_a0;
                puVar4 = local_b8;
                FUN_1005c9898(lVar12,local_b8 + *(int *)(local_a0 + 0x28));
                *(long *)(puVar4 + *(int *)(uVar16 + 0x2c)) = lVar6;
                *(long *)(puVar4 + *(int *)(uVar16 + 0x30)) = local_f0[1];
                *(double *)(puVar4 + *(int *)(uVar16 + 0x34)) = param_2;
                return;
              }
              _swift_bridgeObjectRelease(param_6);
              _swift_bridgeObjectRelease();
              FUN_1005c958c();
              _swift_allocError(&DAT_1009d8730,puVar10,0,0);
              puVar10[1] = 6;
              *puVar10 = 0;
            }
          }
          else {
            _swift_bridgeObjectRelease(param_6);
            _swift_bridgeObjectRelease();
            FUN_1005c958c();
            _swift_allocError(&DAT_1009d8730,puVar10,0,0);
            puVar10[1] = 3;
            *puVar10 = 0;
            uVar18 = local_98;
          }
          goto LAB_1005c918c;
        }
        _swift_bridgeObjectRelease(param_6);
        _swift_bridgeObjectRelease();
        FUN_1005c958c();
        _swift_allocError(&DAT_1009d8730,puVar10,0,0);
        uVar18 = 2;
      }
      puVar10[1] = uVar18;
      *puVar10 = 0;
      uVar18 = local_98;
      lVar17 = local_88;
      goto LAB_1005c918c;
    }
    puVar9 = puVar10;
    (**(code **)(lVar6 + 0x20))(puVar10,uVar16,lVar17);
    __s10Foundation3URLV06isFileB0Sbvg();
    if (((ulong)puVar9 & 1) == 0) {
      _swift_bridgeObjectRelease(param_6);
      _swift_bridgeObjectRelease(local_d0);
      (**(code **)(lVar6 + 8))(puVar10,lVar17);
    }
    else {
      __s10Foundation3URLV4pathSSvg();
      (**(code **)(lVar6 + 8))(puVar10,lVar17);
      uVar8 = uVar16;
      _swift_bridgeObjectRelease(uVar16);
      uVar11 = (ulong)puVar9 & 0xffffffffffff;
      if ((uVar16 & 0x2000000000000000) != 0) {
        uVar11 = uVar16 >> 0x38 & 0xf;
      }
      if (uVar11 != 0) goto LAB_1005c9060;
      _swift_bridgeObjectRelease(param_6);
      puVar10 = local_d0;
      _swift_bridgeObjectRelease();
    }
  }
  FUN_1005c958c();
  _swift_allocError(&DAT_1009d8730,puVar10,0,0);
  *puVar10 = 0;
  puVar10[1] = 0;
  uVar18 = local_98;
LAB_1005c918c:
  _swift_willThrow();
  FUN_100040bb4(param_11,&DAT_100aad5f8,&DAT_10083eb90);
  (**(code **)(lVar6 + 8))(uVar18,lVar17);
  return;
}

