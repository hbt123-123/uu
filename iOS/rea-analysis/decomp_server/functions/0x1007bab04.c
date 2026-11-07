// rea decompile_all
// name: FUN_1007bab04
// address: 0x1007bab04
// body: available
// range: 0x1007bab04-0x1007bae47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001007bade8) */

undefined1  [16] FUN_1007bab04(ID param_1)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  code *pcVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_90 [8];
  code *local_88;
  undefined1 *local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  __s10Foundation10URLRequestVMa();
  lVar14 = *(long *)(lVar1 + -8);
  puVar5 = auStack_90 + -(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100abcaa8;
  FUN_1007b4550();
  uVar9 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = (long)puVar5 - uVar9;
  uVar11 = lVar12 - uVar9;
  lVar13 = uVar11 - uVar9;
  uVar9 = lVar13 - uVar9;
  if (param_1 != 0) {
    IVar3 = _objc_msgSend(param_1,"originalRequest");
    local_80 = puVar5;
    if (IVar3 == 0) {
      pcVar15 = *(code **)(lVar14 + 0x38);
    }
    else {
      __s10Foundation10URLRequestV36_unconditionallyBridgeFromObjectiveCyACSo12NSURLRequestCSgFZ
                (lVar13);
      pcVar15 = *(code **)(lVar14 + 0x38);
    }
    (*pcVar15)(lVar13,IVar3 == 0,1,lVar1);
    FUN_1001303f8(lVar13,uVar9);
    pcVar10 = *(code **)(lVar14 + 0x30);
    uVar4 = uVar9;
    (*pcVar10)(uVar9,1,lVar1);
    if ((int)uVar4 == 1) {
LAB_1007bac28:
      FUN_1007bae48(uVar9);
    }
    else {
      puVar5 = (undefined1 *)0x2d746e65746e6f43;
      lVar13 = -0x13ffffff9a8f86ac;
      __s10Foundation10URLRequestV5value18forHTTPHeaderFieldSSSgSS_tF();
      local_88 = *(code **)(lVar14 + 8);
      (*local_88)(uVar9,lVar1);
      if (lVar13 != 0) {
        if ((puVar5 == &DAT_d000000000000010) && (lVar13 == -0x7ffffffeff7577e0)) {
          _swift_bridgeObjectRelease(0x80000001008a8820);
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (puVar5,lVar13,&DAT_d000000000000010,0x80000001008a8820,0);
          _swift_bridgeObjectRelease(lVar13);
          if (((ulong)puVar5 & 1) == 0) goto LAB_1007bae04;
        }
        IVar3 = _objc_msgSend(param_1,"originalRequest");
        if (IVar3 != 0) {
          __s10Foundation10URLRequestV36_unconditionallyBridgeFromObjectiveCyACSo12NSURLRequestCSgFZ
                    (lVar12);
        }
        (*pcVar15)(lVar12,IVar3 == 0,1,lVar1);
        FUN_1001303f8(lVar12,uVar11);
        uVar4 = uVar11;
        (*pcVar10)(uVar11,1,lVar1);
        puVar5 = local_80;
        uVar9 = uVar11;
        if ((int)uVar4 == 1) goto LAB_1007bac28;
        puVar6 = local_80;
        (**(code **)(lVar14 + 0x10))(local_80,uVar11,lVar1);
        __s10Foundation10URLRequestV8httpBodyAA4DataVSgvg();
        pcVar15 = local_88;
        (*local_88)(puVar5,lVar1);
        (*pcVar15)(uVar11,lVar1);
        if (uVar9 >> 0x3c < 0xf) {
          uVar7 = 0;
          __s10Foundation11JSONDecoderCMa();
          _swift_allocObject();
          __s10Foundation11JSONDecoderCACycfc();
          uVar8 = uVar7;
          FUN_1007bae88();
          __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
                    (&local_70,&DAT_1009eb0e0,puVar6,uVar9,&DAT_1009eb0e0,uVar8);
          FUN_100006cc8(puVar6,uVar9);
          _swift_release(uVar7);
          goto LAB_1007bae0c;
        }
      }
    }
  }
LAB_1007bae04:
  local_70 = 0;
  uStack_68 = 0;
LAB_1007bae0c:
  auVar16._8_8_ = uStack_68;
  auVar16._0_8_ = local_70;
  return auVar16;
}

