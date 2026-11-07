// rea decompile_all
// name: FUN_100538ffc
// address: 0x100538ffc
// body: available
// range: 0x100538ffc-0x1005395db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100538ffc(undefined8 *param_1,long param_2,undefined8 param_3,byte param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long unaff_x21;
  long lVar14;
  undefined8 *apuStack_230 [2];
  undefined1 auStack_220 [24];
  long local_208;
  undefined *local_1f8 [3];
  undefined *local_1e0;
  undefined **local_1d8;
  undefined8 *local_1d0;
  long lStack_1c8;
  ulong local_1c0;
  long lStack_1b8;
  undefined8 local_1b0;
  byte bStack_1a8;
  undefined7 uStack_1a7;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined1 auStack_170 [40];
  undefined1 auStack_148 [24];
  undefined8 *local_130;
  undefined8 *puStack_128;
  undefined8 *local_120;
  long lStack_118;
  ulong local_110;
  long lStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((param_1 == (undefined8 *)0x0) || (param_2 - (long)param_1 < 1)) {
    FUN_1004f98e4();
    _swift_allocError(&DAT_1009d03a0,param_1,0,0);
    param_1[1] = 0xd;
    *param_1 = 0;
    _swift_willThrow();
  }
  else {
    apuStack_230[1] = param_6;
    FUN_1004f9894(param_5,auStack_148);
    FUN_1004f9894(auStack_148,auStack_170);
    lVar5 = 0;
    FUN_10050ef70();
    _swift_allocObject();
    uVar6 = 0x80;
    _swift_slowAlloc(0x80,0xffffffffffffffff);
    *(undefined8 *)(lVar5 + 0x10) = uVar6;
    *(undefined8 *)(lVar5 + 0x18) = 0x80;
    local_1c0 = 0;
    bStack_1a8 = param_4 & 1;
    local_1d0 = param_1;
    lStack_1c8 = param_2;
    lStack_1b8 = lVar5;
    local_1b0 = param_3;
    local_178 = param_3;
    FUN_1004f9894(auStack_170,auStack_220);
    if (local_208 == 0) {
      local_1d8 = &PTR_PTR_1009d1610;
      local_1e0 = &DAT_1009d1638;
      local_1f8[0] = PTR___swiftEmptyDictionarySingleton_100995ea8;
      FUN_100040bb4(auStack_170,&DAT_100aaa0e8,&DAT_1008358c0);
      FUN_100040bb4(auStack_148,&DAT_100aaa0e8,&DAT_1008358c0);
      if (local_208 != 0) {
        FUN_100040bb4(auStack_220,&DAT_100aaa0e8,&DAT_1008358c0);
      }
    }
    else {
      FUN_100040bb4(auStack_170,&DAT_100aaa0e8,&DAT_1008358c0);
      FUN_100040bb4(auStack_148,&DAT_100aaa0e8,&DAT_1008358c0);
      FUN_1000a0074(auStack_220,local_1f8);
    }
    FUN_1000a0074(local_1f8,&uStack_1a0);
    uStack_f8 = CONCAT71(uStack_1a7,bStack_1a8);
    local_100 = local_1b0;
    uStack_e8 = uStack_198;
    uStack_f0 = uStack_1a0;
    uStack_d8 = uStack_188;
    local_e0 = local_190;
    uStack_c8 = local_178;
    uStack_d0 = uStack_180;
    lStack_118 = lStack_1c8;
    local_120 = local_1d0;
    lStack_108 = lStack_1b8;
    local_b8 = param_9;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uVar12 = lStack_1c8 - (long)local_1d0;
    local_110 = local_1c0;
    uVar1 = uVar12;
    local_c0 = param_7;
    if (local_1d0 == (undefined8 *)0x0) {
      uVar1 = 0;
      goto LAB_100539224;
    }
    while (uVar12 != local_110) {
      while( true ) {
        bVar2 = *(byte *)((long)local_1d0 + local_110);
        if (0x20 < bVar2 || (1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
          if (local_1d0 == (undefined8 *)0x0) {
            if (local_110 == 0) goto LAB_1005393f0;
          }
          else if (uVar12 == local_110) goto LAB_1005393f0;
          if ((bVar2 != 0x6e) || (DAT_100aa95d0 != 'n')) goto LAB_1005393f0;
          uVar3 = local_110;
          if ((-1 < (long)local_110) && ((long)local_110 < (long)uVar1)) {
            if (((local_1d0 != (undefined8 *)0x0) && (uVar12 - 1 == local_110)) ||
               (*(char *)((long)local_1d0 + local_110 + 1) != DAT_100aa95d1)) goto LAB_1005393f0;
            uVar3 = local_110 + 1;
            if ((long)(local_110 + 1) < (long)uVar1) {
              if (((local_1d0 != (undefined8 *)0x0) && (uVar12 - 2 == local_110)) ||
                 (*(char *)((long)local_1d0 + local_110 + 2) != DAT_100aa95d2)) goto LAB_1005393f0;
              uVar3 = local_110 + 2;
              if (local_110 + 2 < uVar1) {
                if (((local_1d0 != (undefined8 *)0x0) && (uVar12 - 3 == local_110)) ||
                   (*(char *)((long)local_1d0 + local_110 + 3) != DAT_100aa95d3))
                goto LAB_1005393f0;
                uVar3 = local_110 + 3;
                if (local_110 + 3 < uVar1) {
                  if (((local_1d0 == (undefined8 *)0x0) || (uVar12 - 4 != local_110)) &&
                     (0xffffffe5 < (*(byte *)((long)local_1d0 + local_110 + 4) & 0xffffffdf) - 0x5b)
                     ) goto LAB_1005393f0;
                  puVar7 = param_7;
                  local_110 = local_110 + 4;
                  _swift_conformsToProtocol(param_7,&TargetProtocolDescriptor_100900904);
                  puVar10 = puVar7;
                  if ((puVar7 != (undefined8 *)0x0) && (param_7 != (undefined8 *)0x0)) {
                    pcVar4 = (code *)puVar7[3];
                    lVar5 = 0;
                    __sSqMa(0,param_7);
                    lVar14 = *(long *)(lVar5 + -8);
                    puVar10 = (undefined8 *)
                              ((long)apuStack_230 -
                              (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0));
                    (*pcVar4)(puVar10,param_7,puVar7);
                    if (unaff_x21 != 0) {
                      FUN_10052a568(&local_120);
                      return;
                    }
                    lVar13 = param_7[-1];
                    puVar8 = puVar10;
                    (**(code **)(lVar13 + 0x30))(puVar10,1,param_7);
                    if ((int)puVar8 != 1) {
                      local_130 = param_7;
                      puStack_128 = puVar7;
                      FUN_1000efc08(auStack_148);
                      (**(code **)(lVar13 + 0x20))();
                      FUN_1000a0074(auStack_148,&local_1d0);
                      FUN_1000a0074(&local_1d0,auStack_148);
                      puVar10 = apuStack_230[1];
                      (**(code **)(lVar13 + 8))(apuStack_230[1],param_7);
                      puVar9 = &DAT_100aaa138;
                      FUN_100004bb4(&DAT_100aaa138,&DAT_1008358e0);
                      _swift_dynamicCast(puVar10,auStack_148,puVar9,param_7,7);
                      goto LAB_10053951c;
                    }
                    (**(code **)(lVar14 + 8))(puVar10,lVar5);
                  }
                  FUN_1004f98e4();
                  _swift_allocError(&DAT_1009d03a0,puVar10,0,0);
                  uVar6 = 10;
                  goto LAB_1005395c4;
                }
              }
            }
          }
          local_110 = uVar3;
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005395dc);
          (*pcVar4)();
        }
        if (((long)local_1c0 < 0) || ((long)uVar1 <= (long)local_110)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10053943c);
          (*pcVar4)();
        }
        local_110 = local_110 + 1;
        if (local_1d0 != (undefined8 *)0x0) break;
LAB_100539224:
        if (local_110 == 0) goto LAB_1005393f0;
      }
    }
LAB_1005393f0:
    puVar10 = apuStack_230[1];
    FUN_1005279fc(apuStack_230[1],param_7,param_9);
    uVar1 = local_110;
    if (unaff_x21 == 0) {
LAB_10053951c:
      uVar11 = lStack_118 - (long)local_120;
      uVar12 = 0;
      uVar3 = uVar11;
      uVar1 = local_110;
joined_r0x00010053952c:
      if (local_120 == (undefined8 *)0x0) {
        if (uVar1 == 0) goto LAB_10053940c;
      }
      else {
        uVar12 = uVar3;
        if (uVar11 == uVar1) goto LAB_10053940c;
      }
      if (*(byte *)((long)local_120 + uVar1) < 0x21 &&
          (1L << ((ulong)*(byte *)((long)local_120 + uVar1) & 0x3f) & 0x100002600U) != 0)
      goto code_r0x00010053956c;
      if (local_120 == (undefined8 *)0x0) {
        if (uVar1 == 0) goto LAB_10053940c;
      }
      else if (uVar11 == uVar1) goto LAB_10053940c;
      local_110 = uVar1;
      FUN_1004f98e4();
      _swift_allocError(&DAT_1009d03a0,puVar10,0,0);
      uVar6 = 0x11;
LAB_1005395c4:
      puVar10[1] = uVar6;
      *puVar10 = 0;
      _swift_willThrow();
      uVar1 = local_110;
    }
LAB_10053940c:
    local_110 = uVar1;
    FUN_10052a568(&local_120);
  }
  return;
code_r0x00010053956c:
  if (((long)local_110 < 0) || ((long)uVar12 <= (long)uVar1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1005395d8);
    local_110 = uVar1;
    (*pcVar4)();
  }
  uVar1 = uVar1 + 1;
  uVar3 = uVar12;
  goto joined_r0x00010053952c;
}

