// rea decompile_all
// name: FUN_1000acb6c
// address: 0x1000acb6c
// body: available
// range: 0x1000acb6c-0x1000ace37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000acb6c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *unaff_x20;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined1 auVar13 [16];
  undefined *local_80;
  ulong uStack_78;
  undefined *local_70;
  undefined8 local_68;
  
  lVar9 = *unaff_x20;
  if (lVar9 == 0) {
    local_70 = (undefined *)0x3c;
    local_68 = 0xe100000000000000;
  }
  else {
    if (lVar9 == 1) {
      puVar7 = (undefined *)0x0;
      uVar8 = 0xe000000000000000;
      goto LAB_1000ace18;
    }
    lVar4 = lVar9;
    _swift_bridgeObjectRetain();
    FUN_1000ac220();
    FUN_1000ace38(lVar9);
    lVar9 = *(long *)(lVar4 + 0x10);
    if (lVar9 == 0) {
      _swift_bridgeObjectRelease(lVar4);
      puVar10 = PTR___swiftEmptyArrayStorage_1000f0740;
    }
    else {
      local_80 = PTR___swiftEmptyArrayStorage_1000f0740;
      FUN_1000798d0(0,lVar9,0);
      puVar7 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8;
      pbVar12 = (byte *)(lVar4 + 0x30);
      do {
        puVar10 = local_80;
        uVar8 = *(undefined8 *)(pbVar12 + -0x10);
        uVar2 = *(undefined8 *)(pbVar12 + -8);
        bVar3 = *pbVar12;
        if (bVar3 >> 6 == 0) {
          local_70 = (undefined *)0x2d2d;
          local_68 = 0xe200000000000000;
LAB_1000acc84:
          FUN_100065610(uVar8,uVar2,bVar3);
          __sSS6appendyySSF(uVar8,uVar2);
        }
        else {
          if (bVar3 >> 6 != 1) {
            local_70 = (undefined *)0x2d;
            local_68 = 0xe100000000000000;
            goto LAB_1000acc84;
          }
          local_70 = (undefined *)0x0;
          local_68 = 0xe000000000000000;
          _swift_bridgeObjectRetain(uVar2);
          __sSS6appendyySSF(0x2d,0xe100000000000000);
          __sSJ5write2toyxz_ts16TextOutputStreamRzlF
                    (&local_70,uVar8,uVar2,PTR___ss26DefaultStringInterpolationVN_1000f05a8,puVar7);
        }
        FUN_100065628(uVar8,uVar2,bVar3);
        uVar8 = local_68;
        puVar5 = local_70;
        uVar1 = *(ulong *)(puVar10 + 0x10);
        local_80 = puVar10;
        if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
          FUN_1000798d0(1 < *(ulong *)(puVar10 + 0x18),uVar1 + 1,1);
        }
        puVar10 = local_80;
        pbVar12 = pbVar12 + 0x18;
        *(ulong *)(local_80 + 0x10) = uVar1 + 1;
        *(undefined **)(local_80 + uVar1 * 0x10 + 0x20) = puVar5;
        *(undefined8 *)(local_80 + uVar1 * 0x10 + 0x28) = uVar8;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      _swift_bridgeObjectRelease(lVar4);
    }
    puVar5 = &DAT_100103ed8;
    local_70 = puVar10;
    FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
    puVar6 = &DAT_100103ee0;
    FUN_10002cf3c(&DAT_100103ee0,&DAT_100103ed8,&DAT_1000d5be0,PTR___sSayxGSKsMc_1000f0378);
    puVar7 = (undefined *)0x202c;
    uVar8 = 0xe200000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x202c,0xe200000000000000,puVar5,puVar6);
    _swift_bridgeObjectRelease(puVar10);
    if ((*(byte *)(unaff_x20 + 0x17) & 1) == 0) goto LAB_1000ace18;
    local_70 = puVar7;
    local_68 = uVar8;
    __sSS6appendyySSF(0x3c20,0xe200000000000000);
  }
  puVar7 = (undefined *)unaff_x20[0xd];
  uVar11 = unaff_x20[0xe];
  uVar1 = (ulong)puVar7 & 0xffffffffffff;
  if ((uVar11 & 0x2000000000000000) != 0) {
    uVar1 = uVar11 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    FUN_100084a5c(&local_80);
    uVar11 = uStack_78;
    puVar7 = local_80;
  }
  else {
    _swift_bridgeObjectRetain(uVar11);
  }
  __sSS6appendyySSF(puVar7,uVar11);
  _swift_bridgeObjectRelease(uVar11);
  __sSS6appendyySSF(0x3e,0xe100000000000000);
  puVar7 = local_70;
  uVar8 = local_68;
LAB_1000ace18:
  auVar13._8_8_ = uVar8;
  auVar13._0_8_ = puVar7;
  return auVar13;
}

