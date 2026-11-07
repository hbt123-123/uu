// rea decompile_all
// name: FUN_10064a4d0
// address: 0x10064a4d0
// body: available
// range: 0x10064a4d0-0x10064a75b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010064a690) */

void FUN_10064a4d0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  long unaff_x21;
  undefined1 uVar8;
  undefined1 auStack_78 [24];
  long local_60;
  ulong uStack_58;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  FUN_10003f030(param_2,uVar1);
  __ss7DecoderP16unkeyedContainers015UnkeyedDecodingC0_pyKFTj(auStack_78,uVar1,uVar2);
  uVar6 = uStack_58;
  lVar5 = local_60;
  if (unaff_x21 != 0) {
LAB_10064a5dc:
    FUN_10003f094(param_2);
    return;
  }
  FUN_1000ce034(auStack_78,local_60);
  __ss24UnkeyedDecodingContainerP6decodeyS2SmKFTj();
  if (lVar5 != 0x2b || uVar6 != 0xe100000000000000) {
    uVar4 = 0x2b;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x2b,0xe100000000000000,lVar5,uVar6,0);
    if ((uVar4 & 1) == 0) {
      if ((lVar5 == 0x2d) && (uVar6 == 0xe100000000000000)) {
        _swift_bridgeObjectRelease(0xe100000000000000);
      }
      else {
        uVar4 = 0x2d;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x2d,0xe100000000000000,lVar5,uVar6,0);
        _swift_bridgeObjectRelease(uVar6);
        if ((uVar4 & 1) == 0) {
          lVar5 = 0;
          __ss13DecodingErrorOMa();
          puVar7 = PTR___ss13DecodingErrorOs0B0sWP_100995b18;
          _swift_allocError();
          FUN_10003f030(auStack_78,local_60);
          __ss24UnkeyedDecodingContainerP10codingPathSays9CodingKey_pGvgTj(local_60,uStack_58);
          __ss13DecodingErrorO7ContextV10codingPath16debugDescription010underlyingB0ADSays9CodingKey_pG_SSs0B0_pSgtcfC
                    (puVar7);
          (**(code **)(*(long *)(lVar5 + -8) + 0x68))
                    (puVar7,*(undefined4 *)
                             PTR___ss13DecodingErrorO13dataCorruptedyA2B7ContextVcABmFWC_100995b08,
                     lVar5);
          _swift_willThrow();
          FUN_10003f094(auStack_78);
          goto LAB_10064a5dc;
        }
      }
      uVar8 = 1;
      goto LAB_10064a590;
    }
  }
  _swift_bridgeObjectRelease(uVar6);
  uVar8 = 0;
LAB_10064a590:
  FUN_10003f030(auStack_78,local_60);
  __ss24UnkeyedDecodingContainerP5countSiSgvgTj();
  lVar5 = local_60;
  if (((uStack_58 & 1) == 0) && (lVar5 = local_60 + -1, SBORROW8(local_60,1))) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10064a75c);
    (*pcVar3)();
  }
  FUN_100649e30();
  FUN_100645d2c();
  if (*(long *)(lVar5 + 0x10) == 0) {
    uVar8 = 0;
  }
  FUN_10003f094(auStack_78);
  FUN_10003f094(param_2);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 2;
  param_1[3] = lVar5;
  *(undefined1 *)(param_1 + 4) = uVar8;
  return;
}

