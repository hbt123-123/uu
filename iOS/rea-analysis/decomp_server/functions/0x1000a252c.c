// rea decompile_all
// name: thunk_FUN_1000a2264
// address: 0x1000a252c
// body: available
// range: 0x1000a252c-0x1000a252f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] thunk_FUN_1000a2264(void)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  char *pcVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_50;
  ulong uStack_48;
  
  lVar5 = *unaff_x20;
  lVar7 = unaff_x20[1];
  lVar1 = unaff_x20[2];
  lVar2 = unaff_x20[3];
  lVar8 = unaff_x20[4];
  bVar3 = *(byte *)(unaff_x20 + 5);
  if (bVar3 < 3) {
    if (bVar3 == 0) {
      __ss11_StringGutsV4growyySiF(0x2c);
      _swift_bridgeObjectRelease(0xe000000000000000);
      uStack_50 = 0x100000000000001b;
      uStack_48 = 0x8000000100881320;
      __sSS6appendyySSF(lVar5,lVar7);
      __sSS6appendyySSF(0xb1e681a6e88cbcef,0xad0000203d3e2082);
      lVar5 = lVar1;
      lVar7 = lVar2;
    }
    else if (bVar3 == 1) {
      __ss11_StringGutsV4growyySiF(0x1d);
      _swift_bridgeObjectRelease(0xe000000000000000);
      uStack_48 = 0x8000000100881300;
      uStack_50 = 0x100000000000001b;
    }
    else {
      __ss11_StringGutsV4growyySiF(0x30);
      _swift_bridgeObjectRelease(0xe000000000000000);
      uStack_50 = 0x1000000000000014;
      uStack_48 = 0x80000001008812e0;
      __sSS6appendyySSF(lVar5,lVar7);
      __sSS6appendyySSF(0x43746978658cbcef,0xac0000003d65646f);
      puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar6);
      __sSS6appendyySSF(0x72656474738cbcef,0xaa00000000003d72);
      lVar5 = lVar2;
      lVar7 = lVar8;
    }
  }
  else if (bVar3 == 3) {
    __ss11_StringGutsV4growyySiF(0x1c);
    _swift_bridgeObjectRelease(0xe000000000000000);
    uStack_48 = 0x80000001008812c0;
    uStack_50 = 0x100000000000001a;
  }
  else {
    if (bVar3 != 4) {
      pcVar4 = s_Bundle_tmux_100881360 + 0x10;
      uStack_50 = 0x1000000000000022;
      if (((lVar1 != 0 || lVar7 != 0) || (lVar5 != 0 || lVar2 != 0)) || lVar8 != 0) {
        pcVar4 = s_tmux_100881340;
        uStack_50 = 0x100000000000002b;
      }
      uStack_48 = (ulong)pcVar4 | 0x8000000000000000;
      goto LAB_1000a24c4;
    }
    __ss11_StringGutsV4growyySiF(0x23);
    _swift_bridgeObjectRelease(0xe000000000000000);
    uStack_48 = 0x8000000100881290;
    uStack_50 = 0x1000000000000021;
  }
  __sSS6appendyySSF(lVar5,lVar7);
LAB_1000a24c4:
  auVar9._8_8_ = uStack_48;
  auVar9._0_8_ = uStack_50;
  return auVar9;
}

