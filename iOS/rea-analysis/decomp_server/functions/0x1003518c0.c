// rea decompile_all
// name: FUN_1003518c0
// address: 0x1003518c0
// body: available
// range: 0x1003518c0-0x100351ec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100351974 to 0x100357d58 FUN_100357d58 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003518c0(ulong *param_1,undefined *param_2,ulong param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  undefined1 uVar15;
  long lVar16;
  undefined1 auStack_120 [16];
  undefined1 *local_110;
  undefined1 *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_dc;
  undefined *local_d0;
  ulong uStack_c8;
  undefined1 local_c0;
  undefined1 auStack_b8 [24];
  ulong local_a0;
  ulong uStack_98;
  undefined1 auStack_90 [8];
  long local_88;
  undefined *local_80;
  ulong uStack_78;
  undefined1 local_70;
  
  ppuVar5 = &local_100;
  lVar16 = *(long *)(param_5 + 0x10);
  if (lVar16 == 0) {
    FUN_100350bc0(*param_1,param_1[1],(char)param_1[2]);
    *param_1 = (ulong)param_2;
    param_1[1] = param_3;
    *(char *)(param_1 + 2) = (char)param_4;
    FUN_100357d58(param_2,param_3,param_4);
    return;
  }
  local_f0 = param_6;
  uStack_e8 = param_7;
  local_dc = param_8;
  FUN_1000b142c(param_5 + 0x20,auStack_b8);
  uVar12 = uStack_98;
  uVar13 = local_a0;
  if (lVar16 == 1) {
    local_d0 = param_2;
    uStack_c8 = param_3;
    local_c0 = (char)param_4;
    FUN_100357d58(param_2,param_3,param_4);
    ppuVar5 = &local_100;
    goto LAB_100351b48;
  }
  FUN_10003f030(auStack_b8,local_a0);
  __ss9CodingKeyP8intValueSiSgvgTj();
  if ((uVar12 & 1) == 0) {
    puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
    if ((char)param_1[2] == '\x01') {
      puVar11 = (undefined *)*param_1;
      _swift_bridgeObjectRetain(puVar11);
    }
    local_f8 = 0;
    if ((long)uVar13 < *(long *)(puVar11 + 0x10)) {
      if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100351e14);
        (*pcVar4)();
      }
      puVar1 = *(undefined **)(puVar11 + uVar13 * 0x18 + 0x20);
      uVar12 = *(ulong *)(puVar11 + uVar13 * 0x18 + 0x28);
      uVar15 = puVar11[uVar13 * 0x18 + 0x30];
      FUN_100357d58(puVar1,uVar12,uVar15);
      local_d0 = puVar1;
    }
    else {
      uVar12 = 0;
      uVar15 = 1;
      local_d0 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    _swift_bridgeObjectRelease(puVar11);
    uStack_c8 = uVar12;
    local_c0 = uVar15;
    FUN_100358018(param_5,param_5 + 0x20,1,lVar16 << 1 | 1);
    FUN_1003518c0(&local_d0,param_2,param_3,param_4,param_5,local_f0,uStack_e8,local_dc);
    _swift_release(param_5);
    goto LAB_100351b48;
  }
  ppuVar5 = &local_100;
  if ((char)param_1[2] == '\x02') {
    uVar13 = *param_1;
    uVar12 = param_1[1];
    local_110 = auStack_b8;
    local_100 = (undefined1 *)&local_100;
    _swift_bridgeObjectRetain(uVar13);
    FUN_100351ec4(auStack_90,FUN_10035880c,auStack_120,uVar13);
    FUN_100350bc0(uVar13,uVar12,2);
    ppuVar5 = (undefined1 **)local_100;
    if (local_88 == 0) goto LAB_100351af4;
    _swift_bridgeObjectRelease();
  }
  else {
LAB_100351af4:
    local_70 = 2;
    uStack_78 = 0;
    local_80 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  local_d0 = local_80;
  uStack_c8 = uStack_78;
  local_c0 = local_70;
  FUN_100358018(param_5,param_5 + 0x20,1,lVar16 << 1 | 1);
  FUN_1003518c0(&local_d0,param_2,param_3,param_4,param_5,local_f0,uStack_e8,local_dc);
  _swift_release(param_5);
LAB_100351b48:
  uVar6 = uStack_98;
  uVar9 = local_a0;
  FUN_10003f030(auStack_b8,local_a0);
  __ss9CodingKeyP8intValueSiSgvgTj();
  uVar15 = local_c0;
  uVar12 = uStack_c8;
  puVar11 = local_d0;
  uVar13 = *param_1;
  if ((uVar6 & 1) == 0) {
    if ((char)param_1[2] == '\x01') {
      lVar16 = *(long *)(uVar13 + 0x10);
      uVar6 = uVar13;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((long)uVar9 < lVar16) {
        if ((uVar6 & 1) == 0) {
          FUN_100357f74();
        }
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100351e6c);
          (*pcVar4)();
        }
        if (*(ulong *)(uVar13 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100351ec0);
          (*pcVar4)();
        }
        lVar16 = uVar13 + uVar9 * 0x18;
        uVar7 = *(undefined8 *)(lVar16 + 0x20);
        uVar2 = *(undefined8 *)(lVar16 + 0x28);
        *(undefined **)(lVar16 + 0x20) = puVar11;
        *(ulong *)(lVar16 + 0x28) = uVar12;
        uVar3 = *(undefined1 *)(lVar16 + 0x30);
        *(undefined1 *)(lVar16 + 0x30) = uVar15;
        FUN_100350bc0(uVar7,uVar2,uVar3);
      }
      else {
        uVar9 = uVar13;
        if ((uVar6 & 1) == 0) {
          uVar9 = 0;
          FUN_10029779c(0,lVar16 + 1,1,uVar13);
        }
        uVar6 = *(ulong *)(uVar9 + 0x10);
        uVar13 = uVar9;
        if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar6) {
          uVar13 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
          FUN_10029779c(uVar13,uVar6 + 1,1,uVar9);
        }
        *(ulong *)(uVar13 + 0x10) = uVar6 + 1;
        lVar16 = uVar13 + uVar6 * 0x18;
        *(undefined **)(lVar16 + 0x20) = puVar11;
        *(ulong *)(lVar16 + 0x28) = uVar12;
        *(undefined1 *)(lVar16 + 0x30) = uVar15;
      }
      *param_1 = uVar13;
    }
    else {
      FUN_100350bc0(uVar13,param_1[1]);
      puVar11 = &DAT_100a832e0;
      FUN_100004bb4(&DAT_100a832e0,&DAT_10081c4b0);
      _swift_allocObject();
      *(undefined8 *)(puVar11 + 0x18) = 2;
      *(undefined8 *)(puVar11 + 0x10) = 1;
      *(ulong *)(puVar11 + 0x28) = uStack_c8;
      *(undefined **)(puVar11 + 0x20) = local_d0;
      puVar11[0x30] = local_c0;
      *param_1 = (ulong)puVar11;
    }
    param_1[1] = 0;
    uVar15 = 1;
  }
  else {
    uVar12 = param_1[1];
    if ((char)param_1[2] == '\x02') {
      puVar14 = (undefined1 *)((long)ppuVar5 + -0x20);
      *(undefined1 **)((long)ppuVar5 + -0x10) = auStack_b8;
      _swift_bridgeObjectRetain(uVar13);
      pcVar4 = FUN_1003581c0;
      FUN_10034fea8(FUN_1003581c0,puVar14,uVar13);
      FUN_100350bc0(uVar13,uVar12,2);
      FUN_10003f030(auStack_b8,local_a0);
      uVar9 = local_a0;
      uVar10 = uStack_98;
      __ss9CodingKeyP11stringValueSSvgTj();
      uVar15 = local_c0;
      uVar12 = uStack_c8;
      puVar11 = local_d0;
      uVar6 = uVar13;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar14 & 1) == 0) {
        if ((uVar6 & 1) == 0) {
          FUN_100357f60();
        }
        if ((long)pcVar4 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100351e80);
          (*pcVar4)();
        }
        if (*(code **)(uVar13 + 0x10) <= pcVar4) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100351ec4);
          (*pcVar4)();
        }
        lVar16 = uVar13 + (long)pcVar4 * 0x28;
        uVar7 = *(undefined8 *)(lVar16 + 0x28);
        *(ulong *)(lVar16 + 0x20) = uVar9;
        *(ulong *)(lVar16 + 0x28) = uVar10;
        _swift_bridgeObjectRelease(uVar7);
        uVar7 = *(undefined8 *)(lVar16 + 0x30);
        uVar2 = *(undefined8 *)(lVar16 + 0x38);
        *(undefined **)(lVar16 + 0x30) = puVar11;
        *(ulong *)(lVar16 + 0x38) = uVar12;
        uVar3 = *(undefined1 *)(lVar16 + 0x40);
        *(undefined1 *)(lVar16 + 0x40) = uVar15;
        FUN_100350bc0(uVar7,uVar2,uVar3);
      }
      else {
        uVar8 = uVar13;
        if ((uVar6 & 1) == 0) {
          uVar8 = 0;
          FUN_10029765c(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
        }
        uVar6 = *(ulong *)(uVar8 + 0x10);
        uVar13 = uVar8;
        if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar6) {
          uVar13 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
          FUN_10029765c(uVar13,uVar6 + 1,1,uVar8);
        }
        *(ulong *)(uVar13 + 0x10) = uVar6 + 1;
        lVar16 = uVar13 + uVar6 * 0x28;
        *(ulong *)(lVar16 + 0x20) = uVar9;
        *(ulong *)(lVar16 + 0x28) = uVar10;
        *(undefined **)(lVar16 + 0x30) = puVar11;
        *(ulong *)(lVar16 + 0x38) = uVar12;
        *(undefined1 *)(lVar16 + 0x40) = uVar15;
      }
      *param_1 = uVar13;
    }
    else {
      FUN_100350bc0(uVar13,uVar12);
      puVar11 = &DAT_100a832e8;
      FUN_100004bb4(&DAT_100a832e8,&DAT_1008177f0);
      _swift_allocObject();
      *(undefined8 *)(puVar11 + 0x18) = 2;
      *(undefined8 *)(puVar11 + 0x10) = 1;
      FUN_10003f030(auStack_b8,local_a0);
      __ss9CodingKeyP11stringValueSSvgTj();
      *(ulong *)(puVar11 + 0x20) = local_a0;
      *(ulong *)(puVar11 + 0x28) = uStack_98;
      *(ulong *)(puVar11 + 0x38) = uStack_c8;
      *(undefined **)(puVar11 + 0x30) = local_d0;
      puVar11[0x40] = local_c0;
      *param_1 = (ulong)puVar11;
    }
    param_1[1] = 0;
    uVar15 = 2;
  }
  *(undefined1 *)(param_1 + 2) = uVar15;
  FUN_10003f094(auStack_b8);
  return;
}

