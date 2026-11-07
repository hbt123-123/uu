// rea decompile_all
// name: FUN_1000908fc
// address: 0x1000908fc
// body: available
// range: 0x1000908fc-0x100090d57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000908fc(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong *puVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long unaff_x21;
  ulong uVar15;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  undefined7 uStack_e0;
  undefined1 uStack_d9;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 auStack_b8 [24];
  long local_a0;
  ulong local_90 [6];
  
  FUN_100095304();
  if (unaff_x21 == 0) {
    puVar8 = param_2;
    FUN_10009f5c4(param_2,param_3);
    if (((ulong)puVar8 & 1) == 0) {
      uVar14 = *(ulong *)(param_7 + 0x10);
      _swift_bridgeObjectRetain(param_7);
      if (uVar14 != 0) {
        lVar12 = param_7 + 0x30;
        uVar15 = uVar14;
        do {
          FUN_10005b984(lVar12,auStack_b8);
          puVar9 = &DAT_100104868;
          FUN_10000eb08(&DAT_100104868,&DAT_1000d51b0);
          puVar10 = &DAT_100104408;
          FUN_10000eb08(&DAT_100104408,&DAT_1000d5bb0);
          puVar11 = local_90;
          _swift_dynamicCast(puVar11,auStack_b8,puVar9,puVar10,0xe);
          if (((ulong)puVar11 & 1) == 0) {
            local_90[4] = 0;
            local_90[1] = 0;
            local_90[0] = 0;
            local_90[3] = 0;
            local_90[2] = 0;
          }
          else if (local_90[3] != 0) {
            FUN_10001fc18(local_90,&DAT_100104b28,&DAT_1000d5bc0);
            uVar15 = uVar14 - 1;
            lVar12 = param_7 + uVar14 * 0x38 + -8;
            goto LAB_100090b60;
          }
          FUN_10001fc18(local_90,&DAT_100104b28,&DAT_1000d5bc0);
          lVar12 = lVar12 + 0x38;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      uStack_e0 = 0;
      uStack_d9 = 0;
      uStack_f8 = 0;
      local_100 = 0;
      uStack_e8 = 0;
      uStack_e1 = 0;
      local_f0 = 0;
LAB_100090c44:
      _swift_bridgeObjectRelease(param_7);
      if (CONCAT17(uStack_e1,uStack_e8) == 0) {
        puVar8 = &local_100;
        FUN_10001fc18(puVar8,&DAT_100104b28,&DAT_1000d5bc0);
        FUN_100054664();
        _swift_allocError(&DAT_1000fa8c8,puVar8,0,0);
        *puVar8 = 3;
        puVar8[2] = 0;
        puVar8[1] = 0;
        puVar8[4] = 0;
        puVar8[3] = 0;
        puVar8[6] = 0;
        puVar8[5] = 0;
        puVar8[8] = 0;
        puVar8[7] = 0;
        puVar8[9] = 0;
        *(undefined1 *)(puVar8 + 10) = 0x11;
        _swift_willThrow();
      }
      else {
        FUN_10006c8f8(&local_100,param_1);
      }
    }
    else {
      if ((long)param_2[2] < param_3) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100090d50);
        (*pcVar7)();
      }
      if (param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100090d54);
        (*pcVar7)();
      }
      lVar12 = param_2[2] + 1;
      puVar6 = param_2 + param_3 * 8 + 1;
      do {
        puVar13 = puVar6;
        lVar12 = lVar12 + -1;
        if (param_3 == lVar12) {
          FUN_10009c7e0(param_2,param_3,param_4);
          puVar8 = param_2;
          FUN_100054664();
          _swift_allocError(&DAT_1000fa8c8,puVar8,0,0);
          *puVar8 = param_2;
          puVar8[2] = uStack_f8;
          puVar8[1] = local_100;
          puVar8[9] = local_c0;
          puVar8[8] = uStack_c8;
          puVar8[7] = local_d0;
          puVar8[6] = uStack_d8;
          puVar8[5] = CONCAT17(uStack_d9,uStack_e0);
          puVar8[4] = CONCAT17(uStack_e1,uStack_e8);
          puVar8[3] = local_f0;
          *(undefined1 *)(puVar8 + 10) = 10;
          _swift_willThrow();
          return;
        }
        uVar14 = puVar13[5];
        puVar6 = puVar13 + 8;
      } while ((uVar14 & 0x6000000000000000) != 0);
      uVar1 = puVar13[3];
      uVar3 = puVar13[4];
      uVar2 = puVar13[8];
      uVar4 = puVar13[9];
      uVar5 = *(undefined1 *)(puVar13 + 10);
      local_90[0] = local_90[0] & 0xffffffffffffff00;
      FUN_100054664();
      _swift_allocError(&DAT_1000fa8c8,puVar8,0,0);
      *puVar8 = uVar2;
      puVar8[1] = uVar4;
      *(undefined1 *)(puVar8 + 2) = uVar5;
      *(undefined1 *)((long)puVar8 + 0x11) = (undefined1)local_90[0];
      puVar8[3] = uVar1;
      puVar8[4] = uVar3;
      *(undefined8 *)((long)puVar8 + 0x31) = uStack_f8;
      *(undefined8 *)((long)puVar8 + 0x29) = local_100;
      *(char *)(puVar8 + 5) = (char)uVar14;
      *(ulong *)((long)puVar8 + 0x41) = CONCAT17(uStack_e1,uStack_e8);
      *(undefined8 *)((long)puVar8 + 0x39) = local_f0;
      puVar8[9] = CONCAT71(uStack_e0,uStack_e1);
      *(undefined1 *)(puVar8 + 10) = 4;
      _swift_willThrow();
      FUN_100065610(uVar1,uVar3,uVar14);
    }
  }
  return;
LAB_100090b60:
  FUN_10005b984(lVar12,auStack_b8);
  puVar11 = local_90;
  _swift_dynamicCast(puVar11,auStack_b8,puVar9,puVar10,0xe);
  if (((ulong)puVar11 & 1) == 0) {
    local_90[4] = 0;
    local_90[1] = 0;
    local_90[0] = 0;
    local_90[3] = 0;
    local_90[2] = 0;
  }
  else if (local_90[3] != 0) {
    FUN_10001fc18(local_90,&DAT_100104b28,&DAT_1000d5bc0);
    FUN_10005b984(lVar12,auStack_b8);
    puVar11 = local_90;
    _swift_dynamicCast(puVar11,auStack_b8,puVar9,puVar10,0xe);
    if (((ulong)puVar11 & 1) == 0) {
      local_90[4] = 0;
      local_90[1] = 0;
      local_90[0] = 0;
      local_90[3] = 0;
      local_90[2] = 0;
    }
    FUN_1000133cc(local_90,auStack_b8,&DAT_100104b28,&DAT_1000d5bc0);
    if (local_a0 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100090d58);
      (*pcVar7)();
    }
    FUN_10006c8f8(auStack_b8,&local_100);
    FUN_10001fc18(local_90,&DAT_100104b28,&DAT_1000d5bc0);
    goto LAB_100090c44;
  }
  FUN_10001fc18(local_90,&DAT_100104b28,&DAT_1000d5bc0);
  uVar15 = uVar15 - 1;
  lVar12 = lVar12 + -0x38;
  if (uVar14 <= uVar15) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100090d4c);
    (*pcVar7)();
  }
  goto LAB_100090b60;
}

