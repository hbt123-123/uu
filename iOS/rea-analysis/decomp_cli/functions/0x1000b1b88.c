// rea decompile_all
// name: FUN_1000b1b88
// address: 0x1000b1b88
// body: available
// range: 0x1000b1b88-0x1000b1dcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000b1b88(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined *local_70;
  undefined *local_68;
  
  puVar3 = PTR___swiftEmptyArrayStorage_1000f0740;
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
    local_68 = (undefined *)0x0;
    local_70 = (undefined *)0x0;
  }
  else {
    if (lVar8 == 1) {
      __ss11_StringGutsV4growyySiF(0x18);
      _swift_bridgeObjectRelease(0xe000000000000000);
      local_70 = (undefined *)0xd000000000000015;
      local_68 = (undefined *)0x80000001000cae50;
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      _swift_bridgeObjectRetain(uVar7);
      __sSS6appendyySSF(uVar6,uVar7);
    }
    else {
      FUN_1000798d0(0,lVar8,0);
      puVar5 = (undefined8 *)(param_1 + 0x30);
      do {
        uVar7 = puVar5[-1];
        uVar6 = *puVar5;
        uVar1 = *(ulong *)(puVar3 + 0x10);
        uVar2 = *(ulong *)(puVar3 + 0x18);
        _swift_bridgeObjectRetain(uVar6);
        if (uVar2 >> 1 <= uVar1) {
          FUN_1000798d0(1 < uVar2,uVar1 + 1,1);
        }
        *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar3 + uVar1 * 0x10 + 0x20) = uVar7;
        *(undefined8 *)(puVar3 + uVar1 * 0x10 + 0x28) = uVar6;
        puVar5 = puVar5 + 3;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      puVar4 = &DAT_100103ed8;
      FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
      puVar5 = &DAT_100103ee0;
      FUN_10002cf3c(&DAT_100103ee0,&DAT_100103ed8,&DAT_1000d5be0,PTR___sSayxGSKsMc_1000f0378);
      uVar6 = 0x27202c27;
      uVar7 = 0xe400000000000000;
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x27202c27,0xe400000000000000,puVar4,puVar5);
      _swift_release(puVar3);
      __ss11_StringGutsV4growyySiF(0x1d);
      local_70 = PTR___sSiN_1000f03e8;
      local_68 = PTR___sSis23CustomStringConvertiblesWP_1000f0418;
      __ss23CustomStringConvertibleP11descriptionSSvgTj();
      _swift_bridgeObjectRelease(0xe000000000000000);
      __sSS6appendyySSF(0xd000000000000018,0x80000001000cae30);
      __sSS6appendyySSF(uVar6,uVar7);
    }
    _swift_bridgeObjectRelease(uVar7);
    __sSS6appendyySSF(0x27,0xe100000000000000);
  }
  auVar9._8_8_ = local_68;
  auVar9._0_8_ = local_70;
  return auVar9;
}

