// rea decompile_all
// name: FUN_100044808
// address: 0x100044808
// body: available
// range: 0x100044808-0x100044c93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100044808(long param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_f0 [16];
  long local_e0;
  long lStack_d8;
  long local_d0;
  undefined **ppuStack_c8;
  long local_b8;
  char *local_b0;
  char *pcStack_a8;
  ulong local_a0;
  ulong uStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  undefined *local_68;
  
  puVar5 = &DAT_100a75988;
  FUN_100004bb4(&DAT_100a75988,&DAT_10080a9f0);
  puVar3 = puVar5;
  _swift_initStaticObject();
  lVar12 = *(long *)(puVar3 + 0x10);
  plVar10 = (long *)(puVar3 + 0x28);
  lVar13 = lVar12 + 1;
  do {
    lVar13 = lVar13 + -1;
    if (lVar13 == 0) {
      if ((param_1 - 0xf01U < 0xfffffffffffff100) || (param_2 - 0x961U < 0xfffffffffffff6a0)) {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_d0 = param_1;
        ppuStack_c8 = (undefined **)param_2;
        FUN_1003fb4bc(FUN_100045c7c,&local_e0,0xd0000000000000a5,0x800000010087cb60,
                      0xd000000000000029,0x800000010087cc10,0x31,0);
        return puVar3;
      }
      break;
    }
    plVar1 = plVar10 + -1;
    lVar11 = *plVar10;
    plVar10 = plVar10 + 2;
  } while (*plVar1 != param_1 || lVar11 != param_2);
  _swift_allocObject(puVar5,0x30,7);
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  *(long *)(puVar5 + 0x20) = param_1;
  *(long *)(puVar5 + 0x28) = param_2;
  lVar13 = *(long *)(param_3 + 0x10);
  local_68 = puVar5;
  if (lVar13 != 0) {
    lVar12 = 0;
    local_b0 = "playModeCatalog.swift";
    pcStack_a8 = " virtualDisplayCount:";
    lStack_88 = -0x961;
    local_90 = -0xf01;
    uStack_98 = 0xfffffffffffff6a0;
    local_a0 = 0xfffffffffffff100;
    local_b8 = param_3;
LAB_100044994:
    plVar10 = (long *)(param_3 + 0x20 + lVar12 * 0x10);
    lVar9 = plVar10[1];
    lVar11 = *plVar10;
    if ((ulong)(lVar11 + local_90) < local_a0 || (ulong)(lVar9 + lStack_88) < uStack_98) {
      local_80 = lVar11;
      lStack_78 = lVar9;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      ppuStack_c8 = (undefined **)lStack_78;
      local_d0 = local_80;
      FUN_1003fb4bc(FUN_100045c84,&local_e0,0xd0000000000000a5,
                    (ulong)pcStack_a8 | 0x8000000000000000,0xd000000000000029,
                    (ulong)local_b0 | 0x8000000000000000,0x38,0);
    }
    else {
      lVar7 = 0x20;
      do {
        if (lVar7 == 0x1e0) {
          lVar8 = *(long *)(puVar5 + 0x10);
          lVar7 = 0x20;
          goto LAB_1000449f0;
        }
        plVar10 = (long *)(puVar3 + lVar7);
        lVar7 = lVar7 + 0x10;
      } while (*plVar10 != lVar11 || plVar10[1] != lVar9);
    }
    goto LAB_100044988;
  }
LAB_100044aa0:
  if (lVar12 != 0) {
    lVar13 = 0;
    do {
      lVar14 = *(long *)((long)(puVar3 + lVar13 * 0x10 + 0x20) + 8);
      lVar8 = *(long *)(puVar3 + lVar13 * 0x10 + 0x20);
      lVar13 = lVar13 + 1;
      lVar7 = *(long *)(puVar5 + 0x10);
      lVar11 = 0x20;
      lVar9 = lVar7;
      do {
        if (lVar9 == 0) {
          puVar4 = puVar5;
          local_80 = lVar8;
          lStack_78 = lVar14;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar6 = puVar5;
          if (((ulong)puVar4 & 1) == 0) {
            puVar6 = (undefined *)0x0;
            FUN_100034908(0,lVar7 + 1,1,puVar5);
          }
          uVar2 = *(ulong *)(puVar6 + 0x10);
          puVar5 = puVar6;
          if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar2) {
            puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
            FUN_100034908(puVar5,uVar2 + 1,1,puVar6);
          }
          *(ulong *)(puVar5 + 0x10) = uVar2 + 1;
          *(long *)(puVar5 + uVar2 * 0x10 + 0x28) = lStack_78;
          *(long *)(puVar5 + uVar2 * 0x10 + 0x20) = local_80;
          local_68 = puVar5;
          break;
        }
        plVar10 = (long *)(puVar5 + lVar11);
        lVar11 = lVar11 + 0x10;
        lVar9 = lVar9 + -1;
      } while (*plVar10 != lVar8 || plVar10[1] != lVar14);
    } while (lVar13 != lVar12);
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  ppuStack_c8 = &local_68;
  local_e0 = param_1;
  lStack_d8 = param_2;
  local_d0 = param_3;
  FUN_1003fb48c(FUN_100045c8c,auStack_f0,0xd0000000000000a5,0x800000010087cb60,0xd000000000000029,
                0x800000010087cc10,0x44,0);
  return local_68;
  while( true ) {
    plVar10 = (long *)(puVar5 + lVar7);
    lVar7 = lVar7 + 0x10;
    lVar8 = lVar8 + -1;
    if (*plVar10 == lVar11 && plVar10[1] == lVar9) break;
LAB_1000449f0:
    if (lVar8 == 0) {
      puVar4 = puVar5;
      local_80 = lVar11;
      lStack_78 = lVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar6 = puVar5;
      if (((ulong)puVar4 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        FUN_100034908(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
      }
      uVar2 = *(ulong *)(puVar6 + 0x10);
      puVar5 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar2) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        FUN_100034908(puVar5,uVar2 + 1,1,puVar6);
      }
      *(ulong *)(puVar5 + 0x10) = uVar2 + 1;
      *(long *)(puVar5 + uVar2 * 0x10 + 0x28) = lStack_78;
      *(long *)(puVar5 + uVar2 * 0x10 + 0x20) = local_80;
      local_68 = puVar5;
      break;
    }
  }
LAB_100044988:
  lVar12 = lVar12 + 1;
  if (lVar12 == lVar13) goto LAB_100044a98;
  goto LAB_100044994;
LAB_100044a98:
  lVar12 = *(long *)(puVar3 + 0x10);
  param_3 = local_b8;
  goto LAB_100044aa0;
}

