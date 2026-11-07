// rea decompile_all
// name: FUN_100084bb8
// address: 0x100084bb8
// body: available
// range: 0x100084bb8-0x10008502f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100084bb8(void)

{
  ulong uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x20;
  undefined *puVar10;
  long lVar11;
  byte *pbVar12;
  undefined1 auVar13 [16];
  undefined *local_80;
  ulong uStack_78;
  undefined *local_70;
  undefined8 local_68;
  
  lVar11 = *unaff_x20;
  if (lVar11 == 0) {
    local_70 = (undefined *)0x3c;
    local_68 = 0xe100000000000000;
    puVar10 = (undefined *)unaff_x20[0xd];
    uVar9 = unaff_x20[0xe];
    uVar1 = (ulong)puVar10 & 0xffffffffffff;
    if ((uVar9 & 0x2000000000000000) != 0) {
      uVar1 = uVar9 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      FUN_100084a5c(&local_80);
      uVar9 = uStack_78;
    }
    else {
      _swift_bridgeObjectRetain(uVar9);
      local_80 = puVar10;
    }
    __sSS6appendyySSF(local_80,uVar9);
    _swift_bridgeObjectRelease(uVar9);
    __sSS6appendyySSF(0x3e,0xe100000000000000);
  }
  else if (lVar11 == 1) {
    local_70 = (undefined *)0x0;
    local_68 = 0xe000000000000000;
  }
  else {
    lVar8 = *(long *)(lVar11 + 0x10);
    if ((*(byte *)(unaff_x20 + 0x17) & 1) == 0) {
      puVar10 = PTR___swiftEmptyArrayStorage_1000f0740;
      if (lVar8 != 0) {
        local_80 = PTR___swiftEmptyArrayStorage_1000f0740;
        FUN_1000798d0(0,lVar8,0);
        puVar6 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8;
        puVar5 = PTR___ss26DefaultStringInterpolationVN_1000f05a8;
        pbVar12 = (byte *)(lVar11 + 0x30);
        do {
          puVar10 = local_80;
          uVar7 = *(undefined8 *)(pbVar12 + -0x10);
          uVar2 = *(undefined8 *)(pbVar12 + -8);
          bVar3 = *pbVar12;
          if (bVar3 >> 6 == 0) {
            local_70 = (undefined *)0x2d2d;
            local_68 = 0xe200000000000000;
LAB_100084e14:
            FUN_100065610(uVar7,uVar2,bVar3);
            __sSS6appendyySSF(uVar7,uVar2);
          }
          else {
            if (bVar3 >> 6 != 1) {
              local_70 = (undefined *)0x2d;
              local_68 = 0xe100000000000000;
              goto LAB_100084e14;
            }
            local_70 = (undefined *)0x0;
            local_68 = 0xe000000000000000;
            _swift_bridgeObjectRetain(uVar2);
            __sSS6appendyySSF(0x2d,0xe100000000000000);
            __sSJ5write2toyxz_ts16TextOutputStreamRzlF(&local_70,uVar7,uVar2,puVar5,puVar6);
          }
          FUN_100065628(uVar7,uVar2,bVar3);
          uVar7 = local_68;
          puVar4 = local_70;
          uVar1 = *(ulong *)(puVar10 + 0x10);
          local_80 = puVar10;
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
            FUN_1000798d0(1 < *(ulong *)(puVar10 + 0x18),uVar1 + 1,1);
          }
          pbVar12 = pbVar12 + 0x18;
          *(ulong *)(local_80 + 0x10) = uVar1 + 1;
          *(undefined **)(local_80 + uVar1 * 0x10 + 0x20) = puVar4;
          *(undefined8 *)(local_80 + uVar1 * 0x10 + 0x28) = uVar7;
          lVar8 = lVar8 + -1;
          puVar10 = local_80;
        } while (lVar8 != 0);
      }
      puVar5 = &DAT_100103ed8;
      local_70 = puVar10;
      FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
      puVar6 = puVar5;
      FUN_100052ab4();
      puVar4 = (undefined *)0x2c;
      uVar7 = 0xe100000000000000;
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x2c,0xe100000000000000,puVar5,puVar6);
      _swift_bridgeObjectRelease(puVar10);
      local_70 = puVar4;
      local_68 = uVar7;
    }
    else {
      puVar10 = PTR___swiftEmptyArrayStorage_1000f0740;
      if (lVar8 != 0) {
        local_80 = PTR___swiftEmptyArrayStorage_1000f0740;
        FUN_1000798d0(0,lVar8,0);
        puVar6 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8;
        puVar5 = PTR___ss26DefaultStringInterpolationVN_1000f05a8;
        pbVar12 = (byte *)(lVar11 + 0x30);
        do {
          puVar10 = local_80;
          uVar7 = *(undefined8 *)(pbVar12 + -0x10);
          uVar2 = *(undefined8 *)(pbVar12 + -8);
          bVar3 = *pbVar12;
          if (bVar3 >> 6 == 0) {
            local_70 = (undefined *)0x2d2d;
            local_68 = 0xe200000000000000;
LAB_100084ce0:
            FUN_100065610(uVar7,uVar2,bVar3);
            __sSS6appendyySSF(uVar7,uVar2);
          }
          else {
            if (bVar3 >> 6 != 1) {
              local_70 = (undefined *)0x2d;
              local_68 = 0xe100000000000000;
              goto LAB_100084ce0;
            }
            local_70 = (undefined *)0x0;
            local_68 = 0xe000000000000000;
            _swift_bridgeObjectRetain(uVar2);
            __sSS6appendyySSF(0x2d,0xe100000000000000);
            __sSJ5write2toyxz_ts16TextOutputStreamRzlF(&local_70,uVar7,uVar2,puVar5,puVar6);
          }
          FUN_100065628(uVar7,uVar2,bVar3);
          uVar7 = local_68;
          puVar4 = local_70;
          uVar1 = *(ulong *)(puVar10 + 0x10);
          local_80 = puVar10;
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
            FUN_1000798d0(1 < *(ulong *)(puVar10 + 0x18),uVar1 + 1,1);
          }
          pbVar12 = pbVar12 + 0x18;
          *(ulong *)(local_80 + 0x10) = uVar1 + 1;
          *(undefined **)(local_80 + uVar1 * 0x10 + 0x20) = puVar4;
          *(undefined8 *)(local_80 + uVar1 * 0x10 + 0x28) = uVar7;
          lVar8 = lVar8 + -1;
          puVar10 = local_80;
        } while (lVar8 != 0);
      }
      puVar5 = &DAT_100103ed8;
      local_70 = puVar10;
      FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
      puVar6 = puVar5;
      FUN_100052ab4();
      puVar4 = (undefined *)0x2c;
      uVar7 = 0xe100000000000000;
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x2c,0xe100000000000000,puVar5,puVar6);
      _swift_bridgeObjectRelease(puVar10);
      local_70 = (undefined *)0x3c20;
      local_68 = 0xe200000000000000;
      puVar10 = (undefined *)unaff_x20[0xd];
      uVar9 = unaff_x20[0xe];
      uVar1 = (ulong)puVar10 & 0xffffffffffff;
      if ((uVar9 & 0x2000000000000000) != 0) {
        uVar1 = uVar9 >> 0x38 & 0xf;
      }
      if (uVar1 == 0) {
        FUN_100084a5c(&local_80);
        uVar9 = uStack_78;
        puVar10 = local_80;
      }
      else {
        _swift_bridgeObjectRetain(uVar9);
      }
      __sSS6appendyySSF(puVar10,uVar9);
      _swift_bridgeObjectRelease(uVar9);
      __sSS6appendyySSF(0x3e,0xe100000000000000);
      uVar2 = local_68;
      puVar10 = local_70;
      local_70 = puVar4;
      local_68 = uVar7;
      _swift_bridgeObjectRetain(uVar7);
      __sSS6appendyySSF(puVar10,uVar2);
      _swift_bridgeObjectRelease(uVar7);
      _swift_bridgeObjectRelease(uVar2);
    }
  }
  auVar13._8_8_ = local_68;
  auVar13._0_8_ = local_70;
  return auVar13;
}

