// rea decompile_all
// name: FUN_10052757c
// address: 0x10052757c
// body: available
// range: 0x10052757c-0x1005279fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005279ec) */

void FUN_10052757c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  code *pcVar10;
  long *unaff_x20;
  long unaff_x21;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined1 auStack_e0 [8];
  ulong local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined1 *local_b0;
  long local_a8;
  undefined8 *puStack_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 *local_70;
  
  puVar1 = (undefined8 *)0x0;
  local_c0 = param_3;
  __sSqMa();
  local_a8 = puVar1[-1];
  lVar11 = *(long *)(local_a8 + 0x40);
  puVar14 = auStack_e0 + -(lVar11 + 0xfU & 0xfffffffffffffff0);
  lVar12 = param_2[-1];
  uVar7 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_b0 = puVar14 + -uVar7;
  local_98 = (long)local_b0 - uVar7;
  puVar8 = (undefined1 *)(local_98 - uVar7);
  local_c8 = puVar8;
  puStack_a0 = puVar1;
  FUN_100535660();
  lVar13 = unaff_x20[1];
  lVar9 = unaff_x20[2];
  lVar15 = *unaff_x20;
  if (lVar15 == 0) {
    if (lVar9 != 0) goto LAB_10052763c;
  }
  else if (lVar9 != lVar13 - lVar15) {
LAB_10052763c:
    if (*(char *)(lVar15 + lVar9) == 'n') {
      uVar7 = 0;
      FUN_100004bb4(&DAT_100aaa100,&DAT_1008386b0);
      _swift_initStaticObject();
      FUN_100536178();
      if ((uVar7 & 1) != 0) {
        return;
      }
    }
  }
  FUN_1005363c8(0x5b);
  if (unaff_x21 != 0) {
    return;
  }
  FUN_100535660();
  lVar9 = unaff_x20[2];
  if (lVar15 == 0) {
    if (lVar9 == 0) goto LAB_1005276d8;
  }
  else if (lVar9 == lVar13 - lVar15) goto LAB_1005276d8;
  if (*(char *)(lVar15 + lVar9) == ']') {
    lVar11 = 0;
    if (lVar15 != 0) {
      lVar11 = lVar13 - lVar15;
    }
    if ((lVar9 < 0) || (lVar11 <= lVar9)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1005276d8);
      (*pcVar10)();
    }
LAB_100527988:
    unaff_x20[2] = lVar9 + 1;
    return;
  }
LAB_1005276d8:
  lVar13 = lVar13 - lVar15;
  local_d8 = lVar11 + 0xfU & 0xfffffffffffffff0;
  uVar6 = local_c0;
  local_b8 = lVar13;
  do {
    FUN_100535660();
    lVar9 = unaff_x20[2];
    if (lVar15 == 0) {
      if (lVar9 != 0) goto LAB_10052773c;
LAB_10052780c:
      FUN_1005346a8(puVar14,param_2,uVar6);
      puVar2 = puVar14;
      (**(code **)(lVar12 + 0x30))(puVar14,1,param_2);
      puVar4 = local_b0;
      if ((int)puVar2 == 1) {
        pcVar10 = *(code **)(local_a8 + 8);
        puVar4 = puVar14;
        puVar1 = puStack_a0;
      }
      else {
        (**(code **)(lVar12 + 0x20))(local_b0,puVar14,param_2);
        lVar13 = local_98;
        (**(code **)(lVar12 + 0x10))(local_98,puVar4,param_2);
        uVar3 = 0;
        __sSaMa(0,param_2);
        __sSa6appendyyxnF(lVar13,uVar3);
        pcVar10 = *(code **)(lVar12 + 8);
        puVar1 = param_2;
        lVar13 = local_b8;
      }
      (*pcVar10)(puVar4,puVar1);
    }
    else {
      if (lVar9 == lVar13) goto LAB_10052780c;
LAB_10052773c:
      if (*(char *)(lVar15 + lVar9) != 'n') goto LAB_10052780c;
      uVar7 = 0;
      FUN_100004bb4(&DAT_100aaa100,&DAT_1008386b0);
      _swift_initStaticObject();
      FUN_100536178();
      if ((uVar7 & 1) == 0) goto LAB_10052780c;
      puVar1 = param_2;
      _swift_conformsToProtocol(param_2,&TargetProtocolDescriptor_100900904);
      if (puVar1 == (undefined8 *)0x0) {
        FUN_1004f98e4();
        _swift_allocError(&DAT_1009d03a0,puVar1,0,0);
        puVar1[1] = 10;
        *puVar1 = 0;
        _swift_willThrow();
        return;
      }
      lVar9 = (long)puVar8 - local_d8;
      local_d0 = puVar8;
      (*(code *)puVar1[3])(lVar9,param_2,puVar1);
      lVar13 = lVar9;
      (**(code **)(lVar12 + 0x30))(lVar9,1,param_2);
      if ((int)lVar13 == 1) {
        (**(code **)(local_a8 + 8))(lVar9,puStack_a0);
        local_70 = (undefined8 *)0x0;
        uStack_88 = 0;
        local_90 = 0;
        local_78 = (undefined8 *)0x0;
        uStack_80 = 0;
      }
      else {
        local_78 = param_2;
        local_70 = puVar1;
        FUN_1000efc08(&local_90);
        (**(code **)(lVar12 + 0x20))();
      }
      puVar8 = local_d0;
      puVar5 = &DAT_100aaa140;
      FUN_100004bb4(&DAT_100aaa140,&DAT_100837af0);
      puVar4 = local_c8;
      _swift_dynamicCast(local_c8,&local_90,puVar5,param_2,7);
      lVar13 = local_98;
      (**(code **)(lVar12 + 0x10))(local_98,puVar4,param_2);
      uVar6 = 0;
      __sSaMa(0,param_2);
      __sSa6appendyyxnF(lVar13,uVar6);
      (**(code **)(lVar12 + 8))(puVar4,param_2);
      uVar6 = local_c0;
      lVar13 = local_b8;
    }
    FUN_100535660();
    lVar9 = unaff_x20[2];
    if (lVar15 == 0) {
      if (lVar9 != 0) goto LAB_1005276f8;
    }
    else if (lVar9 != lVar13) {
LAB_1005276f8:
      if (*(char *)(lVar15 + lVar9) == ']') break;
    }
    FUN_1005363c8(0x2c);
  } while( true );
  lVar11 = 0;
  if (lVar15 != 0) {
    lVar11 = lVar13;
  }
  if ((lVar9 < 0) || (lVar11 <= lVar9)) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1005279fc);
    (*pcVar10)();
  }
  goto LAB_100527988;
}

