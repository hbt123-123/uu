// rea decompile_all
// name: FUN_10024eea8
// address: 0x10024eea8
// body: available
// range: 0x10024eea8-0x10024f46b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_10024eea8(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  void *pvVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int iVar17;
  ulong uVar18;
  char *pcVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long local_230;
  long local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  code *local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  code *local_1f0;
  undefined8 uStack_1e8;
  undefined8 *local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 *local_1b8;
  undefined8 *puStack_1b0;
  long local_1a8;
  long local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  ulong local_170;
  long local_168;
  long local_160;
  long local_158 [22];
  undefined8 local_a8;
  undefined4 local_a0;
  long local_78;
  ulong local_70 [2];
  
  uStack_1c0 = 0;
  local_1c8 = 0;
  puStack_1b0 = (undefined8 *)0x0;
  local_1b8 = (undefined8 *)0x0;
  if (param_2 == (undefined8 *)0x0) {
    FUN_10024ebe0(&local_220);
  }
  else {
    uStack_1d8 = param_2[9];
    local_1e0 = (undefined8 *)param_2[8];
    local_1c8 = param_2[0xb];
    uStack_1d0 = param_2[10];
    uStack_1c0 = param_2[0xc];
    uStack_218 = param_2[1];
    local_220 = *param_2;
    uStack_208 = param_2[3];
    local_210 = (code *)param_2[2];
    uStack_1f8 = param_2[5];
    local_200 = param_2[4];
    uStack_1e8 = param_2[7];
    local_1f0 = (code *)param_2[6];
  }
  puVar5 = &local_220;
  FUN_10024e884(puVar5,param_1,5);
  if (puVar5 == (undefined8 *)0x0) {
    return (void *)0x0;
  }
  local_a0 = 0;
  local_1b8 = puVar5;
  puStack_1b0 = puVar5;
  pvVar6 = _malloc(0x404);
  if (pvVar6 != (void *)0x0) {
    puVar7 = &local_220;
    FUN_10024e8ac(puVar7,puVar5,0,2);
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &local_220;
      FUN_10024e8c0(puVar7,puVar5);
      puVar9 = puVar7;
      if ((undefined8 *)0xfffe < puVar7) {
        puVar9 = (undefined8 *)0xffff;
      }
      puVar21 = (undefined8 *)0x4;
      do {
        if (puVar9 <= puVar21) goto LAB_10024ef54;
        puVar21 = puVar21 + 0x80;
        if (puVar9 <= puVar21) {
          puVar21 = puVar9;
        }
        puVar10 = puVar21;
        if ((undefined8 *)0x403 < puVar21) {
          puVar10 = (undefined8 *)0x404;
        }
        puVar8 = &local_220;
        FUN_10024e8ac(puVar8,puVar5,(long)puVar7 - (long)puVar21,0);
        if ((puVar8 != (undefined8 *)0x0) ||
           (puVar8 = local_1e0, (*local_210)(local_1e0,puVar5,pvVar6,puVar10), puVar8 != puVar10))
        goto LAB_10024ef54;
        if ((undefined8 *)0x3 < puVar7) {
          uVar18 = (ulong)((int)puVar10 - 4);
          uVar20 = (long)puVar7 + (uVar18 - (long)puVar21);
          pcVar19 = (char *)((long)pvVar6 + uVar18 + 1);
          iVar17 = (int)puVar10 + -3;
          do {
            if ((((pcVar19[-1] == 'P') && (*pcVar19 == 'K')) && (pcVar19[1] == '\x05')) &&
               (pcVar19[2] == '\x06')) goto LAB_10024f070;
            uVar20 = uVar20 - 1;
            pcVar19 = pcVar19 + -1;
            iVar2 = iVar17 + -1;
            bVar1 = 0 < iVar17;
            iVar17 = iVar2;
          } while (iVar2 != 0 && bVar1);
        }
        uVar20 = 0;
LAB_10024f070:
      } while (uVar20 == 0);
      _free(pvVar6);
      puVar5 = &local_220;
      FUN_10024e8ac(puVar5,local_1b8,uVar20,0);
      puVar7 = &local_220;
      FUN_100251044(puVar7,local_1b8,&local_228);
      puVar9 = &local_220;
      FUN_1002510fc(puVar9,local_1b8,&local_228);
      local_168 = local_228;
      puVar21 = &local_220;
      FUN_1002510fc(puVar21,local_1b8,&local_228);
      local_1a0 = local_228;
      puVar10 = &local_220;
      FUN_1002510fc(puVar10,local_1b8,&local_228);
      local_1a8 = local_228;
      puVar8 = &local_220;
      FUN_1002510fc(puVar8,local_1b8,&local_228);
      lVar4 = local_1a8;
      lVar3 = local_228;
      local_230 = local_228;
      puVar11 = &local_220;
      FUN_100251044(puVar11,local_1b8,&local_228);
      local_160 = local_228;
      puVar12 = &local_220;
      FUN_100251044(puVar12,local_1b8,&local_228);
      local_158[0] = local_228;
      puVar13 = &local_220;
      FUN_1002510fc(puVar13,local_1b8,auStack_198);
      puVar15 = local_1b8;
      if (((((((int)puVar12 == 0 && (int)puVar11 == 0) && (int)puVar13 == 0) && (lVar3 == lVar4)) &&
           (((int)puVar8 == 0 && (((int)puVar10 == 0 && ((int)puVar21 == 0)))))) &&
          ((int)puVar9 == 0 && (int)puVar7 == 0)) && (puVar5 == (undefined8 *)0x0)) {
        if (((local_1a8 == 0xffff) || (local_160 == 0xffff)) || (local_158[0] == 0xffffffff)) {
          puVar5 = &local_220;
          FUN_10024e8ac(puVar5,local_1b8,uVar20 - 0x14,0);
          if (puVar5 != (undefined8 *)0x0) goto LAB_10024ef5c;
          puVar5 = &local_220;
          FUN_100251044(puVar5,puVar15,&local_78);
          if (((int)puVar5 != 0) || (local_78 != 0x7064b50)) goto LAB_10024ef5c;
          puVar5 = &local_220;
          FUN_100251044(puVar5,puVar15,&local_78);
          if ((int)puVar5 != 0) goto LAB_10024ef5c;
          puVar5 = &local_220;
          FUN_100251174(puVar5,puVar15,local_70);
          if ((int)puVar5 != 0) goto LAB_10024ef5c;
          puVar5 = &local_220;
          FUN_100251044(puVar5,puVar15,&local_78);
          if ((int)puVar5 != 0) goto LAB_10024ef5c;
          puVar5 = &local_220;
          FUN_10024e8ac(puVar5,puVar15,local_70[0],0);
          if (puVar5 != (undefined8 *)0x0) goto LAB_10024ef5c;
          puVar5 = &local_220;
          FUN_100251044(puVar5,puVar15,&local_78);
          if ((((int)puVar5 != 0) || (local_78 != 0x6064b50)) || (local_70[0] == 0))
          goto LAB_10024ef5c;
          local_a0 = 1;
          puVar5 = &local_220;
          FUN_10024e8ac(puVar5,local_1b8,local_70[0],0);
          puVar7 = &local_220;
          FUN_100251044(puVar7,local_1b8,&local_228);
          puVar9 = &local_220;
          FUN_100251174(puVar9,local_1b8,local_70);
          puVar21 = &local_220;
          FUN_1002510fc(puVar21,local_1b8,&local_228);
          puVar10 = &local_220;
          FUN_1002510fc(puVar10,local_1b8,&local_228);
          puVar8 = &local_220;
          FUN_100251044(puVar8,local_1b8,&local_168);
          puVar11 = &local_220;
          FUN_100251044(puVar11,local_1b8,&local_1a0);
          puVar12 = &local_220;
          FUN_100251174(puVar12,local_1b8,&local_1a8);
          puVar13 = &local_220;
          FUN_100251174(puVar13,local_1b8,&local_230);
          lVar4 = local_1a8;
          lVar3 = local_230;
          puVar15 = &local_220;
          FUN_100251174(puVar15,local_1b8,&local_160);
          puVar16 = &local_220;
          FUN_100251174(puVar16,local_1b8,local_158);
          if ((((((int)puVar16 != 0) || ((int)puVar15 != 0)) || (lVar3 != lVar4)) ||
              (((int)puVar13 != 0 || (((int)puVar11 != 0 || (int)puVar8 != 0) || (int)puVar12 != 0))
              )) || ((((int)puVar10 != 0 ||
                      (((int)puVar21 != 0 || ((int)puVar9 != 0 || (int)puVar7 != 0)))) ||
                     (uVar20 = local_70[0], puVar5 != (undefined8 *)0x0)))) goto LAB_10024ef5c;
        }
        if ((ulong)(local_160 + local_158[0]) <= uVar20) {
          if (local_1a0 == 0) {
            puVar5 = &local_220;
            FUN_10024e884(puVar5,param_1,5);
            if (puVar5 != (undefined8 *)0x0) {
              local_1b8 = puVar5;
            }
          }
          local_190 = uVar20 - (local_158[0] + local_160);
          local_a8 = 0;
          local_170 = uVar20;
          pvVar6 = _malloc(0x1a8);
          if (pvVar6 != (void *)0x0) {
            _memcpy(pvVar6,&local_220,0x1a8);
            *(undefined8 *)((long)pvVar6 + 0x98) = 0;
            *(undefined8 *)((long)pvVar6 + 0xa0) = *(undefined8 *)((long)pvVar6 + 200);
            pvVar14 = pvVar6;
            FUN_10024f750(pvVar6,(long)pvVar6 + 0xd0,(long)pvVar6 + 0x168,0,0,0,0,0,0);
            *(ulong *)((long)pvVar6 + 0xa8) = (ulong)((int)pvVar14 == 0);
            return pvVar6;
          }
          return (void *)0x0;
        }
      }
    }
    else {
LAB_10024ef54:
      _free(pvVar6);
    }
  }
LAB_10024ef5c:
  (*local_1f0)(local_1e0,local_1b8);
  return (void *)0x0;
}

