// rea decompile_all
// name: FUN_100052368
// address: 0x100052368
// body: available
// range: 0x100052368-0x10005294b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100052368(long param_1,undefined8 param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  long local_70;
  undefined8 local_68;
  
  puVar3 = PTR___swiftEmptyArrayStorage_1000f0740;
  lVar11 = *(long *)(param_1 + 0x70);
  bVar2 = *(byte *)(param_1 + 0x80);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      FUN_10004fae0();
      __sSS6appendyySSF(0x2720572d20,0xe500000000000000);
      puVar3 = PTR___swiftEmptyArrayStorage_1000f0740;
      lVar10 = *(long *)(lVar11 + 0x10);
      if (lVar10 != 0) {
        FUN_1000798d0(0,lVar10,0);
        puVar12 = (undefined8 *)(lVar11 + 0x28);
        do {
          uVar7 = puVar12[-1];
          uVar8 = *puVar12;
          _swift_bridgeObjectRetain(uVar8);
          uVar4 = 1;
          FUN_100052ee8(1,uVar7,uVar8);
          _swift_bridgeObjectRelease(uVar8);
          uVar1 = *(ulong *)(puVar3 + 0x10);
          if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
            FUN_1000798d0(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
          }
          *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
          *(undefined8 *)(puVar3 + uVar1 * 0x10 + 0x20) = uVar4;
          *(undefined8 *)(puVar3 + uVar1 * 0x10 + 0x28) = uVar7;
          puVar12 = puVar12 + 2;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      puVar5 = &DAT_100103ed8;
      FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
      puVar6 = puVar5;
      FUN_100052ab4();
      uVar7 = 0x27276e5c272427;
      uVar8 = 0xe700000000000000;
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF
                (0x27276e5c272427,0xe700000000000000,puVar5,puVar6);
      _swift_bridgeObjectRelease(puVar3);
      __sSS6appendyySSF(uVar7,uVar8);
      _swift_bridgeObjectRelease(uVar8);
      uVar7 = 0xa27;
      uVar8 = 0xe200000000000000;
      local_70 = param_1;
      local_68 = param_2;
    }
    else {
      lVar10 = *(long *)(lVar11 + 0x10);
      if (lVar10 == 0) {
        FUN_10004fae0();
        uVar7 = 0xa662d20;
        uVar8 = 0xe400000000000000;
        local_70 = param_1;
        local_68 = param_2;
      }
      else {
        FUN_1000798d0(0,lVar10,0);
        puVar12 = (undefined8 *)(lVar11 + 0x28);
        do {
          uVar7 = puVar12[-1];
          uVar8 = *puVar12;
          _swift_bridgeObjectRetain(uVar8);
          uVar4 = 1;
          FUN_100052ee8(1,uVar7,uVar8);
          _swift_bridgeObjectRelease(uVar8);
          uVar1 = *(ulong *)(puVar3 + 0x10);
          if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
            FUN_1000798d0(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
          }
          *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
          *(undefined8 *)(puVar3 + uVar1 * 0x10 + 0x20) = uVar4;
          *(undefined8 *)(puVar3 + uVar1 * 0x10 + 0x28) = uVar7;
          puVar12 = puVar12 + 2;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        puVar5 = &DAT_100103ed8;
        FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
        puVar6 = puVar5;
        FUN_100052ab4();
        uVar7 = 0x7c;
        uVar8 = 0xe100000000000000;
        __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x7c,0xe100000000000000,puVar5,puVar6);
        local_68 = uVar8;
        _swift_release(puVar3);
        local_70 = 0x1e;
        __ss11_StringGutsV4growyySiF();
        FUN_10004fae0();
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(0xd000000000000017,0x80000001000c9020);
        __sSS6appendyySSF(uVar7,uVar8);
        _swift_bridgeObjectRelease(uVar8);
        uVar7 = 0xa2729;
LAB_100052920:
        uVar8 = 0xe300000000000000;
      }
    }
  }
  else {
    lVar10 = *(long *)(param_1 + 0x78);
    if (bVar2 == 2) {
      local_70 = 0x15;
      __ss11_StringGutsV4growyySiF();
      FUN_10004fae0();
      _swift_bridgeObjectRelease(0xe000000000000000);
      __sSS6appendyySSF(0x6528242220572d20,0xed000027206c6176);
      FUN_100052ee8(1,lVar11,lVar10);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(lVar11);
      uVar7 = 0xa222927;
      uVar8 = 0xe400000000000000;
      local_68 = param_2;
    }
    else {
      if (bVar2 == 0xff) {
        local_70 = 0;
        local_68 = 0xe000000000000000;
        goto LAB_10005292c;
      }
      lVar9 = lVar10 + -1 + (ulong)(lVar11 != 0);
      if (lVar9 != 0 || CARRY8(lVar9 - 1,(ulong)(1 < lVar11 - 1U))) {
        if (lVar11 != 0 || lVar10 != 0) {
          local_70 = 0x11;
          __ss11_StringGutsV4growyySiF();
          FUN_10004fae0();
          _swift_bridgeObjectRelease(0xe000000000000000);
          uVar7 = 0xe700000000000000;
          __sSS6appendyySSF(0x28242220572d20,0xe700000000000000);
          FUN_10004fbb0();
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(uVar7);
          uVar7 = 0xe100000000000000;
          __sSS6appendyySSF(0x20,0xe100000000000000);
          FUN_100052f74();
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(uVar7);
          uVar7 = 0xa2229;
          local_68 = param_2;
          goto LAB_100052920;
        }
        FUN_10004fae0();
        uVar7 = 0xa642d20;
        uVar8 = 0xe400000000000000;
        local_70 = param_1;
        local_68 = param_2;
      }
      else {
        local_70 = 0x29;
        __ss11_StringGutsV4growyySiF();
        FUN_10004fae0();
        _swift_bridgeObjectRelease(0xe000000000000000);
        uVar7 = 0xe700000000000000;
        __sSS6appendyySSF(0x28242220572d20,0xe700000000000000);
        FUN_10004fbb0();
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(uVar7);
        uVar7 = 0xe100000000000000;
        __sSS6appendyySSF(0x20,0xe100000000000000);
        FUN_100052f74();
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(uVar7);
        uVar7 = 0x80000001000c9000;
        __sSS6appendyySSF(0xd000000000000014,0x80000001000c9000);
        FUN_10004f940();
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(uVar7);
        uVar7 = 0xa22292229;
        uVar8 = 0xe500000000000000;
        local_68 = param_2;
      }
    }
  }
  __sSS6appendyySSF(uVar7,uVar8);
LAB_10005292c:
  auVar13._8_8_ = local_68;
  auVar13._0_8_ = local_70;
  return auVar13;
}

