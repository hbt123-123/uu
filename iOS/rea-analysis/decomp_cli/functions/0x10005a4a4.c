// rea decompile_all
// name: FUN_10005a4a4
// address: 0x10005a4a4
// body: available
// range: 0x10005a4a4-0x10005ab33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10005a4a4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_70;
  
  lVar9 = *(long *)(param_1 + 0x70);
  bVar2 = *(byte *)(param_1 + 0x80);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      FUN_10005b4a8();
      uVar6 = param_2;
      FUN_100058ccc();
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(uVar6);
      __sSS6appendyySSF(0x7b242220,0xe400000000000000);
      __sSS6appendyySSF(param_1,param_2);
      __sSS6appendyySSF(0x7d227d5d405b,0xe600000000000000);
      __ss11_StringGutsV4growyySiF(0x11);
      _swift_bridgeObjectRelease(0xe000000000000000);
      __sSS6appendyySSF(param_1,param_2);
      _swift_bridgeObjectRelease(param_2);
      __sSS6appendyySSF(0x283d,0xe200000000000000);
      puVar3 = PTR___swiftEmptyArrayStorage_1000f0740;
      lVar10 = *(long *)(lVar9 + 0x10);
      if (lVar10 != 0) {
        FUN_1000798d0(0,lVar10,0);
        puVar5 = (undefined8 *)(lVar9 + 0x28);
        do {
          uVar6 = puVar5[-1];
          uVar7 = *puVar5;
          _swift_bridgeObjectRetain(uVar7);
          FUN_100052ee8(1,uVar6,uVar7);
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(uVar6);
          __sSS6appendyySSF(0x27,0xe100000000000000);
          _swift_bridgeObjectRelease(uVar7);
          uVar1 = *(ulong *)(puVar3 + 0x10);
          if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
            FUN_1000798d0(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
          }
          *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
          *(undefined8 *)(puVar3 + uVar1 * 0x10 + 0x20) = 0x27;
          *(undefined8 *)(puVar3 + uVar1 * 0x10 + 0x28) = 0xe100000000000000;
          puVar5 = puVar5 + 2;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      puVar4 = &DAT_100103ed8;
      FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
      puVar5 = &DAT_100103ee0;
      FUN_10002cf3c(&DAT_100103ee0,&DAT_100103ed8,&DAT_1000d5be0,PTR___sSayxGSKsMc_1000f0378);
      uVar6 = 0x20;
      uVar7 = 0xe100000000000000;
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,puVar4,puVar5);
      _swift_bridgeObjectRelease(puVar3);
      __sSS6appendyySSF(uVar6,uVar7);
      _swift_bridgeObjectRelease(uVar7);
      __sSS6appendyySSF(0x29,0xe100000000000000);
      return 0x7b;
    }
    lVar10 = *(long *)(lVar9 + 0x10);
    if (lVar10 == 0) {
      return 0x73656c69665f;
    }
    __ss11_StringGutsV4growyySiF(0x14);
    _swift_bridgeObjectRelease(0xe000000000000000);
    puVar3 = PTR___swiftEmptyArrayStorage_1000f0740;
    local_70 = 0x2d2073656c69665f;
    FUN_1000798d0(0,lVar10,0);
    puVar5 = (undefined8 *)(lVar9 + 0x28);
    do {
      uVar6 = puVar5[-1];
      uVar7 = *puVar5;
      _swift_bridgeObjectRetain(uVar7);
      FUN_100052ee8(1,uVar6,uVar7);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(uVar7);
      _swift_bridgeObjectRelease(uVar6);
      uVar1 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        FUN_1000798d0(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar3 + uVar1 * 0x10 + 0x20) = 0x2e2a;
      *(undefined8 *)(puVar3 + uVar1 * 0x10 + 0x28) = 0xe200000000000000;
      puVar5 = puVar5 + 2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    puVar4 = &DAT_100103ed8;
    FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
    puVar5 = &DAT_100103ee0;
    FUN_10002cf3c(&DAT_100103ee0,&DAT_100103ed8,&DAT_1000d5be0,PTR___sSayxGSKsMc_1000f0378);
    uVar6 = 0x20;
    uVar7 = 0xe100000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,puVar4,puVar5);
    _swift_release(puVar3);
    __sSS6appendyySSF(uVar6,uVar7);
    _swift_bridgeObjectRelease(uVar7);
    uVar6 = 0x27275c27;
    uVar7 = 0xe400000000000000;
  }
  else {
    lVar10 = *(long *)(param_1 + 0x78);
    if (bVar2 == 2) {
      __ss11_StringGutsV4growyySiF(0x39);
      local_70 = 0;
      __sSS6appendyySSF(0xd00000000000001d,0x80000001000ca2f0);
      FUN_100052ee8(1,lVar9,lVar10);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(lVar9);
      uVar7 = 0x80000001000ca310;
      uVar6 = 0xd00000000000001a;
    }
    else {
      if (bVar2 == 0xff) {
        return 0;
      }
      lVar8 = lVar10 + -1 + (ulong)(lVar9 != 0);
      if (lVar8 != 0 || CARRY8(lVar8 - 1,(ulong)(1 < lVar9 - 1U))) {
        if (lVar9 == 0 && lVar10 == 0) {
          return 0x2d2073656c69665f;
        }
        local_70 = 0x7b;
        FUN_10004fbb0();
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(param_2);
        uVar6 = 0xe100000000000000;
        __sSS6appendyySSF(0x20,0xe100000000000000);
        FUN_100052f74();
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(uVar6);
        uVar6 = 0x7d;
        uVar7 = 0xe100000000000000;
      }
      else {
        __ss11_StringGutsV4growyySiF(0x27);
        _swift_bridgeObjectRelease(0xe000000000000000);
        local_70 = 0x7b;
        FUN_10004fbb0();
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(param_2);
        uVar6 = 0xe100000000000000;
        __sSS6appendyySSF(0x20,0xe100000000000000);
        FUN_100052f74();
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(uVar6);
        uVar6 = 0x80000001000ca2d0;
        __sSS6appendyySSF(0xd00000000000001c,0x80000001000ca2d0);
        FUN_10004f940();
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(uVar6);
        uVar6 = 0x7d2229;
        uVar7 = 0xe300000000000000;
      }
    }
  }
  __sSS6appendyySSF(uVar6,uVar7);
  return local_70;
}

