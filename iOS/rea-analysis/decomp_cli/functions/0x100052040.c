// rea decompile_all
// name: FUN_100052040
// address: 0x100052040
// body: available
// range: 0x100052040-0x100052367 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100052040(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  uStack_98 = param_2[0x11];
  local_a0 = param_2[0x10];
  uStack_88 = param_2[0x13];
  uStack_90 = param_2[0x12];
  local_80 = param_2[0x14];
  uStack_d8 = param_2[9];
  local_e0 = param_2[8];
  uStack_c8 = param_2[0xb];
  uStack_d0 = param_2[10];
  uStack_b8 = param_2[0xd];
  local_c0 = param_2[0xc];
  uStack_a8 = param_2[0xf];
  uStack_b0 = param_2[0xe];
  uStack_118 = param_2[1];
  local_120 = *param_2;
  uStack_108 = param_2[3];
  uStack_110 = param_2[2];
  uStack_f8 = param_2[5];
  local_100 = param_2[4];
  uStack_e8 = param_2[7];
  uStack_f0 = param_2[6];
  if ((char)local_120 == '\0') {
    lVar7 = -0x15ffffffffff939f;
    uVar1 = 0x6e6f697469736f70;
LAB_1000520dc:
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar1,lVar7,0x67616c66,0xe400000000000000,0);
    _swift_bridgeObjectRelease();
    if ((uVar1 & 1) != 0) goto LAB_100052248;
    FUN_100051efc();
    if (*(long *)(lVar7 + 0x10) != 0) {
      __ss11_StringGutsV4growyySiF(0x23);
      _swift_bridgeObjectRelease(0xe000000000000000);
      puVar8 = PTR___swiftEmptyArrayStorage_1000f0740;
      lVar9 = *(long *)(lVar7 + 0x10);
      if (lVar9 == 0) {
        _swift_bridgeObjectRelease(lVar7);
        puVar8 = PTR___swiftEmptyArrayStorage_1000f0740;
      }
      else {
        FUN_1000798d0(0,lVar9,0);
        puVar5 = (undefined8 *)(lVar7 + 0x28);
        do {
          uVar4 = puVar5[-1];
          uVar6 = *puVar5;
          _swift_bridgeObjectRetain(uVar6);
          FUN_100052ee8(1,uVar4,uVar6);
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(uVar4);
          __sSS6appendyySSF(0x27,0xe100000000000000);
          _swift_bridgeObjectRelease(uVar6);
          uVar1 = *(ulong *)(puVar8 + 0x10);
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
            FUN_1000798d0(1 < *(ulong *)(puVar8 + 0x18),uVar1 + 1,1);
          }
          *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
          *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = 0x27;
          *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = 0xe100000000000000;
          puVar5 = puVar5 + 2;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        _swift_bridgeObjectRelease(lVar7);
      }
      puVar2 = &DAT_100103ed8;
      FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
      puVar3 = puVar2;
      FUN_100052ab4();
      uVar4 = 0x7c;
      uVar6 = 0xe100000000000000;
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x7c,0xe100000000000000,puVar2,puVar3);
      _swift_bridgeObjectRelease(puVar8);
      __sSS6appendyySSF(uVar4,uVar6);
      _swift_bridgeObjectRelease(uVar6);
      uVar6 = 0xe200000000000000;
      __sSS6appendyySSF(0xa29,0xe200000000000000);
      puVar5 = &local_120;
      FUN_100052368(puVar5);
      uVar4 = 8;
      FUN_100058858(8,puVar5,uVar6);
      _swift_bridgeObjectRelease(uVar6);
      __sSS6appendyySSF(uVar4,puVar5);
      _swift_bridgeObjectRelease(puVar5);
      __sSS6appendyySSF(0xd000000000000019,0x80000001000c9040);
      *param_1 = 0x20202020;
      param_1[1] = 0xe400000000000000;
      return;
    }
  }
  else {
    if ((char)local_120 == '\x01') {
      lVar7 = -0x1a00000000000000;
      uVar1 = 0x6e6f6974706f;
      goto LAB_1000520dc;
    }
    lVar7 = -0x1c00000000000000;
  }
  _swift_bridgeObjectRelease(lVar7);
LAB_100052248:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

