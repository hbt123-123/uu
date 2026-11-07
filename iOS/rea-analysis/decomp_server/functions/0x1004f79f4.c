// rea decompile_all
// name: FUN_1004f79f4
// address: 0x1004f79f4
// body: available
// range: 0x1004f79f4-0x1004f813b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004f7d00) */
/* WARNING: Removing unreachable block (ram,0x0001004f7e40) */
/* WARNING: Removing unreachable block (ram,0x0001004f7ed0) */
/* WARNING: Removing unreachable block (ram,0x0001004f7ee0) */
/* WARNING: Removing unreachable block (ram,0x0001004f7ee4) */
/* WARNING: Removing unreachable block (ram,0x0001004f7b80) */

void FUN_1004f79f4(ulong *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  TargetProtocolDescriptor *pTVar11;
  uint uVar12;
  long unaff_x20;
  ulong uVar13;
  undefined1 auStack_158 [40];
  long local_130;
  TargetProtocolDescriptor *local_128;
  undefined *local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *local_108;
  undefined **local_100;
  undefined1 auStack_f0 [24];
  long local_d8;
  ulong uStack_d0;
  long local_c8;
  ulong uStack_c0;
  undefined1 auStack_b0 [24];
  long local_98;
  ulong uStack_90;
  undefined1 local_88;
  char local_70;
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_b0,0,0);
  FUN_1004f75cc(unaff_x20 + 0x20,&local_98);
  if (local_70 == '\0') {
    _swift_beginAccess(unaff_x20 + 0x10,auStack_158,0,0);
    lVar3 = *(long *)(unaff_x20 + 0x10);
    uVar5 = *(ulong *)(unaff_x20 + 0x18);
    _swift_bridgeObjectRetain(uVar5);
    uVar10 = uVar5;
    FUN_1005188b8();
    _swift_bridgeObjectRelease(uVar5);
    uVar5 = uVar10;
    FUN_100519568();
    _swift_bridgeObjectRelease(uVar10);
    if (lVar3 == 0) {
      uVar10 = *(ulong *)(unaff_x20 + 0x10);
      uVar8 = *(ulong *)(unaff_x20 + 0x18);
      uVar5 = uVar10 & 0xffffffffffff;
      if ((uVar8 & 0x2000000000000000) != 0) {
        uVar5 = uVar8 >> 0x38 & 0xf;
      }
      if (uVar5 != 0) {
        _swift_bridgeObjectRetain(uVar8);
        FUN_100557cc0(1);
        FUN_1004f9e80(": ",2);
        FUN_1005567d8(uVar10,uVar8);
        _swift_bridgeObjectRelease(uVar8);
        uVar8 = *param_1;
        uVar5 = uVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar10 = uVar8;
        if ((uVar5 & 1) == 0) {
          uVar10 = 0;
          FUN_100506f84(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
        }
        uVar5 = *(ulong *)(uVar10 + 0x10);
        uVar8 = uVar10;
        if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar5) {
          uVar8 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
          FUN_100506f84(uVar8,uVar5 + 1,1,uVar10);
        }
        *(ulong *)(uVar8 + 0x10) = uVar5 + 1;
        *(undefined1 *)(uVar8 + uVar5 + 0x20) = 10;
        *param_1 = uVar8;
      }
      uVar2 = (uint)(uStack_90 >> 0x20);
      uVar12 = uVar2 >> 0x1e;
      if (uVar2 >> 0x1e < 2) {
        if (uVar12 == 0) {
          if ((uStack_90 & 0xff000000000000) != 0) {
LAB_1004f7d20:
            FUN_100557cc0(2);
            FUN_1004f9e80(": ",2);
            FUN_100556f40(local_98,uStack_90);
            uVar8 = *param_1;
            uVar5 = uVar8;
            _swift_isUniquelyReferenced_nonNull_native();
            uVar10 = uVar8;
            if ((uVar5 & 1) == 0) {
              uVar10 = 0;
              FUN_100506f84(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
            }
            uVar5 = *(ulong *)(uVar10 + 0x10);
            uVar8 = uVar10;
            if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar5) {
              uVar8 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
              FUN_100506f84(uVar8,uVar5 + 1,1,uVar10);
            }
            *(ulong *)(uVar8 + 0x10) = uVar5 + 1;
            *(undefined1 *)(uVar8 + uVar5 + 0x20) = 10;
            FUN_100006cdc(local_98,uStack_90);
            *param_1 = uVar8;
            return;
          }
        }
        else if ((long)(int)local_98 != local_98 >> 0x20) goto LAB_1004f7d20;
      }
      else if ((uVar12 == 2) && (*(long *)(local_98 + 0x10) != *(long *)(local_98 + 0x18)))
      goto LAB_1004f7d20;
      FUN_100006cdc(local_98,uStack_90);
      return;
    }
    local_c8 = local_98;
    uStack_c0 = uStack_90;
    local_100 = (undefined **)0x0;
    uStack_118 = 0;
    local_120 = (undefined *)0x0;
    local_108 = (undefined *)0x0;
    uStack_110 = 0;
    puVar4 = auStack_f0;
    local_d8 = lVar3;
    uStack_d0 = uVar5;
    FUN_1000efc08(puVar4);
    FUN_100008184(local_98,uStack_90);
    FUN_100537714(puVar4,&local_c8,&local_120,1,100,0,lVar3,PTR___s10Foundation4DataVN_1009961e8,
                  uVar5,&PTR_PTR_1009d16b0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
    _swift_bridgeObjectRetain(uVar7);
    FUN_1004f96fc(param_1,puVar4,uVar1,uVar7,lVar3,uVar5);
    FUN_100006cdc(local_98,uStack_90);
  }
  else if (local_70 == '\x01') {
    FUN_1000a0074(&local_98,auStack_f0);
    _swift_beginAccess(unaff_x20 + 0x10,&local_120,0,0);
    uVar5 = uStack_d0;
    lVar3 = local_d8;
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
    puVar4 = auStack_f0;
    FUN_10003f030(puVar4,local_d8);
    _swift_bridgeObjectRetain(uVar7);
    FUN_1004f96fc(param_1,puVar4,uVar1,uVar7,lVar3,uVar5);
  }
  else {
    _swift_beginAccess(unaff_x20 + 0x10,&local_c8,0,0);
    lVar3 = *(long *)(unaff_x20 + 0x10);
    uVar5 = *(ulong *)(unaff_x20 + 0x18);
    _swift_bridgeObjectRetain(uVar5);
    uVar10 = uVar5;
    FUN_1005188b8();
    _swift_bridgeObjectRelease(uVar5);
    uVar8 = uVar10;
    FUN_100519568();
    uVar5 = uVar8;
    _swift_bridgeObjectRelease(uVar10);
    if (lVar3 == 0) {
      uVar8 = *(ulong *)(unaff_x20 + 0x10);
      uVar13 = *(ulong *)(unaff_x20 + 0x18);
      uVar10 = uVar8 & 0xffffffffffff;
      if ((uVar13 & 0x2000000000000000) != 0) {
        uVar10 = uVar13 >> 0x38 & 0xf;
      }
      if (uVar10 != 0) {
        _swift_bridgeObjectRetain(uVar13);
        FUN_100557cc0(1);
        FUN_1004f9e80(": ",2);
        uVar5 = uVar13;
        FUN_1005567d8(uVar8,uVar13);
        _swift_bridgeObjectRelease(uVar13);
        uVar13 = *param_1;
        uVar10 = uVar13;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar8 = uVar13;
        if ((uVar10 & 1) == 0) {
          uVar5 = *(long *)(uVar13 + 0x10) + 1;
          uVar8 = 0;
          FUN_100506f84(0,uVar5,1,uVar13);
        }
        uVar13 = *(ulong *)(uVar8 + 0x10);
        uVar10 = uVar13 + 1;
        uVar9 = uVar8;
        if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar13) {
          uVar9 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
          uVar5 = uVar10;
          FUN_100506f84(uVar9,uVar10,1,uVar8);
        }
        *(ulong *)(uVar9 + 0x10) = uVar10;
        *(undefined1 *)(uVar9 + uVar13 + 0x20) = 10;
        *param_1 = uVar9;
      }
      lVar3 = local_98;
      FUN_1004f589c(local_98);
      _swift_bridgeObjectRelease(local_98);
      _swift_bridgeObjectRetain(param_1[1]);
      FUN_1004fa13c();
      FUN_1004f9e80("#json: ",7);
      FUN_100556f40(lVar3,uVar5);
      FUN_1004f9e80("\n",1);
      FUN_100006cdc(lVar3,uVar5);
      return;
    }
    local_100 = &PTR_PTR_1009d1610;
    local_108 = &DAT_1009d1638;
    local_120 = PTR___swiftEmptyDictionarySingleton_100995ea8;
    pTVar11 = &TargetProtocolDescriptor_100900904;
    lVar6 = lVar3;
    _swift_conformsToProtocol();
    local_d8 = lVar3;
    uStack_d0 = uVar8;
    if (lVar6 == 0) {
      lVar6 = local_98;
      FUN_1004f589c();
      local_130 = lVar6;
      local_128 = pTVar11;
      FUN_1000b142c(&local_120,auStack_158);
      puVar4 = auStack_f0;
      FUN_1000efc08(puVar4);
      FUN_100008184(lVar6,pTVar11);
      FUN_1005386f8(puVar4,&local_130,auStack_158,uStack_90,local_88,lVar3,
                    PTR___s10Foundation4DataVN_1009961e8,uVar8,&PTR_PTR_1009d16b0);
      _swift_bridgeObjectRelease(local_98);
      FUN_100006cdc(lVar6,pTVar11);
    }
    else {
      local_130 = 0;
      local_128 = (TargetProtocolDescriptor *)0xe000000000000000;
      FUN_1004f5a80(local_98 + 0x20,local_98 + 0x20 + *(long *)(local_98 + 0x10),uStack_90,local_88,
                    &local_120,&local_130);
      pTVar11 = local_128;
      lVar6 = local_130;
      FUN_1000b142c(&local_120,auStack_158);
      puVar4 = auStack_f0;
      FUN_1000efc08(puVar4);
      _swift_bridgeObjectRetain(pTVar11);
      FUN_100538860(puVar4,lVar6,pTVar11,auStack_158,uStack_90,local_88,lVar3,uVar8);
      _swift_bridgeObjectRelease(pTVar11);
      _swift_bridgeObjectRelease(local_98);
    }
    FUN_10003f094(&local_120);
    uVar5 = uStack_d0;
    lVar3 = local_d8;
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
    puVar4 = auStack_f0;
    FUN_10003f030(puVar4,local_d8);
    _swift_bridgeObjectRetain(uVar7);
    FUN_1004f96fc(param_1,puVar4,uVar1,uVar7,lVar3,uVar5);
  }
  _swift_bridgeObjectRelease(uVar7);
  FUN_10003f094(auStack_f0);
  return;
}

