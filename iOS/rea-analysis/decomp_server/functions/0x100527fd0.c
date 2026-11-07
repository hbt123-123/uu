// rea decompile_all
// name: FUN_100527fd0
// address: 0x100527fd0
// body: available
// range: 0x100527fd0-0x100528543 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005284c8) */
/* WARNING: Removing unreachable block (ram,0x000100528488) */

void FUN_100527fd0(undefined8 param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  long *unaff_x20;
  long unaff_x21;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong auStack_160 [4];
  undefined1 *local_140;
  undefined1 *local_138;
  undefined8 *local_130;
  long local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  long lStack_108;
  long local_100;
  long local_c0;
  long local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar3 = 0;
  __sSqMa();
  auStack_160[2] = *(long *)(lVar3 + -8);
  local_140 = *(undefined1 **)(auStack_160[2] + 0x40);
  local_130 = (undefined8 *)((long)auStack_160 - ((ulong)(local_140 + 0xf) & 0xfffffffffffffff0));
  lVar11 = *(long *)(param_2 + -8);
  uVar8 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar13 = (long)local_130 - uVar8;
  local_128 = lVar13 - uVar8;
  puVar9 = (undefined1 *)(local_128 - uVar8);
  auStack_160[3] = lVar3;
  local_138 = puVar9;
  FUN_100535660();
  lVar3 = unaff_x20[1];
  lVar10 = unaff_x20[2];
  lVar12 = *unaff_x20;
  if (lVar12 == 0) {
    if (lVar10 != 0) goto LAB_1005280b0;
  }
  else if (lVar10 != lVar3 - lVar12) {
LAB_1005280b0:
    if (*(char *)(lVar12 + lVar10) == 'n') {
      uVar8 = 0;
      FUN_100004bb4(&DAT_100aaa100,&DAT_1008386b0);
      _swift_initStaticObject();
      FUN_100536178();
      if ((uVar8 & 1) != 0) {
        return;
      }
    }
  }
  FUN_1005363c8(0x5b);
  if (unaff_x21 != 0) {
    return;
  }
  FUN_100535660();
  lVar10 = unaff_x20[2];
  if (lVar12 == 0) {
    if (lVar10 == 0) goto LAB_100528170;
  }
  else if (lVar10 == lVar3 - lVar12) goto LAB_100528170;
  if (*(char *)(lVar12 + lVar10) == ']') {
    lVar11 = 0;
    if (lVar12 != 0) {
      lVar11 = lVar3 - lVar12;
    }
    if ((lVar10 < 0) || (lVar11 <= lVar10)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100528170);
      (*pcVar2)();
    }
LAB_1005284bc:
    unaff_x20[2] = lVar10 + 1;
    return;
  }
LAB_100528170:
  auStack_160[1] = (ulong)(local_140 + 0xf) & 0xfffffffffffffff0;
  do {
    FUN_100535660();
    lVar10 = unaff_x20[2];
    if (lVar12 == 0) {
      if (lVar10 != 0) goto LAB_1005281d8;
LAB_1005282c8:
      (**(code **)(param_3 + 0x10))(lVar13,param_2,param_3);
      FUN_10052a52c();
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      local_80 = 0;
      local_c0 = param_2;
      local_b8 = param_3;
      FUN_1005279fc(lVar13,param_2,param_3);
      lVar3 = local_128;
      (**(code **)(lVar11 + 0x10))(local_128,lVar13,param_2);
      uVar4 = 0;
      __sSaMa(0,param_2);
      __sSa6appendyyxnF(lVar3,uVar4);
      (**(code **)(lVar11 + 8))(lVar13,param_2);
      FUN_10052a594(&local_120);
      FUN_10052a568(&local_120);
    }
    else {
      if (lVar10 == lVar3 - lVar12) goto LAB_1005282c8;
LAB_1005281d8:
      if (*(char *)(lVar12 + lVar10) != 'n') goto LAB_1005282c8;
      uVar8 = 0;
      FUN_100004bb4(&DAT_100aaa100,&DAT_1008386b0);
      _swift_initStaticObject();
      FUN_100536178();
      if ((uVar8 & 1) == 0) goto LAB_1005282c8;
      lVar3 = param_2;
      _swift_conformsToProtocol(param_2,&TargetProtocolDescriptor_100900904);
      puVar7 = (undefined8 *)0x0;
      if (lVar3 == 0) {
LAB_100528508:
        FUN_1004f98e4();
        _swift_allocError(&DAT_1009d03a0,puVar7,0,0);
        puVar7[1] = 10;
        *puVar7 = 0;
        _swift_willThrow();
        return;
      }
      lVar12 = (long)puVar9 - auStack_160[1];
      local_140 = puVar9;
      (**(code **)(lVar3 + 0x18))(lVar12,param_2,lVar3);
      lVar10 = lVar12;
      (**(code **)(lVar11 + 0x30))(lVar12,1,param_2);
      if ((int)lVar10 == 1) {
        (**(code **)(auStack_160[2] + 8))(lVar12,auStack_160[3]);
        local_100 = 0;
        lStack_108 = 0;
        local_110 = 0;
        uStack_118 = 0;
        local_120 = 0;
      }
      else {
        lStack_108 = param_2;
        local_100 = lVar3;
        FUN_1000efc08(&local_120);
        (**(code **)(lVar11 + 0x20))();
      }
      puVar7 = local_130;
      puVar9 = local_140;
      puVar5 = &DAT_100aaa140;
      FUN_100004bb4(&DAT_100aaa140,&DAT_100837af0);
      puVar6 = puVar7;
      _swift_dynamicCast(puVar7,&local_120,puVar5,param_2,6);
      if (((ulong)puVar6 & 1) == 0) {
        (**(code **)(lVar11 + 0x38))(puVar7,1,1,param_2);
        (**(code **)(auStack_160[2] + 8))(puVar7,auStack_160[3]);
        goto LAB_100528508;
      }
      (**(code **)(lVar11 + 0x38))(puVar7,0,1,param_2);
      puVar1 = local_138;
      (**(code **)(lVar11 + 0x20))(local_138,puVar7,param_2);
      lVar3 = local_128;
      (**(code **)(lVar11 + 0x10))(local_128,puVar1,param_2);
      uVar4 = 0;
      __sSaMa(0,param_2);
      __sSa6appendyyxnF(lVar3,uVar4);
      (**(code **)(lVar11 + 8))(puVar1,param_2);
    }
    FUN_100535660();
    lVar3 = unaff_x20[1];
    lVar10 = unaff_x20[2];
    lVar12 = *unaff_x20;
    if (lVar12 == 0) {
      if (lVar10 != 0) goto LAB_100528190;
    }
    else if (lVar10 != lVar3 - lVar12) {
LAB_100528190:
      if (*(char *)(lVar12 + lVar10) == ']') break;
    }
    FUN_1005363c8(0x2c);
  } while( true );
  lVar11 = 0;
  if (lVar12 != 0) {
    lVar11 = lVar3 - lVar12;
  }
  if ((lVar10 < 0) || (lVar11 <= lVar10)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100528544);
    (*pcVar2)();
  }
  goto LAB_1005284bc;
}

