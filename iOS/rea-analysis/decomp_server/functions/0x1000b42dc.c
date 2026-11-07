// rea decompile_all
// name: FUN_1000b42dc
// address: 0x1000b42dc
// body: available
// range: 0x1000b42dc-0x1000b462b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

byte FUN_1000b42dc(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  long lVar6;
  code *pcVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte bVar10;
  undefined1 auStack_90 [16];
  byte local_80;
  long *local_78;
  byte local_61;
  long local_60 [4];
  
  _CGSessionCopyCurrentDictionary();
  if ((param_1 != 0) &&
     (_swift_dynamicCastObjCClass(param_1,&_OBJC_CLASS___NSDictionary),
     puVar1 = PTR___sypN_100995e88, param_1 != 0)) {
    local_60[0] = 0;
    __sSD10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo12NSDictionaryC_SDyxq_GSgztFZ
              ();
    lVar3 = local_60[0];
    if (local_60[0] != 0) {
      if (*(long *)(local_60[0] + 0x10) == 0) {
LAB_1000b4490:
        _swift_bridgeObjectRelease(lVar3);
      }
      else {
        _swift_bridgeObjectRetain(local_60[0]);
        puVar4 = &DAT_d000000000000018;
        uVar8 = 0;
        FUN_1001a2c70(&DAT_d000000000000018);
        if ((uVar8 & 1) != 0) {
          FUN_10003e8bc(*(long *)(lVar3 + 0x38) + (long)puVar4 * 0x20,local_60);
          _swift_bridgeObjectRelease(lVar3);
          pbVar5 = &local_61;
          _swift_dynamicCast(pbVar5,local_60,puVar1 + 8,PTR___sSbN_1009958c8,6);
          bVar2 = local_61;
          if (((ulong)pbVar5 & 1) == 0) goto LAB_1000b4490;
          if ((local_61 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar3);
            return local_61;
          }
          if (*(long *)(lVar3 + 0x10) == 0) {
LAB_1000b452c:
            bVar10 = 2;
          }
          else {
            _swift_bridgeObjectRetain(lVar3);
            lVar6 = -0x2fffffffffffffea;
            uVar8 = 0;
            FUN_1001a2c70(0xd000000000000016);
            if ((uVar8 & 1) == 0) {
              _swift_bridgeObjectRelease(lVar3);
              goto LAB_1000b452c;
            }
            FUN_10003e8bc(*(long *)(lVar3 + 0x38) + lVar6 * 0x20,local_60);
            _swift_bridgeObjectRelease(lVar3);
            pbVar5 = &local_61;
            _swift_dynamicCast(pbVar5,local_60,puVar1 + 8,PTR___sSbN_1009958c8,6);
            bVar10 = local_61;
            if ((int)pbVar5 == 0) {
              bVar10 = 2;
            }
          }
          if (*(long *)(lVar3 + 0x10) != 0) {
            _swift_bridgeObjectRetain(lVar3);
            lVar6 = -0x2fffffffffffffec;
            uVar8 = 0;
            FUN_1001a2c70(0xd000000000000014);
            if ((uVar8 & 1) != 0) {
              FUN_10003e8bc(*(long *)(lVar3 + 0x38) + lVar6 * 0x20,local_60);
              _swift_bridgeObjectRelease(lVar3);
              goto LAB_1000b4588;
            }
            _swift_bridgeObjectRelease(lVar3);
          }
          local_60[1] = 0;
          local_60[0] = 0;
          local_60[3] = 0;
          local_60[2] = 0;
LAB_1000b4588:
          _swift_bridgeObjectRelease(lVar3);
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_78 = local_60;
          local_80 = bVar10;
          FUN_1003fb45c(FUN_1000b4890,auStack_90,0xd000000000000099,0x8000000100881de0,
                        0xd00000000000001c,0x8000000100881f20,0x3f,0);
          FUN_100040bb4(local_60,&DAT_100a766e0,&DAT_10080bdb0);
          return bVar2;
        }
        _swift_bridgeObjectRelease_n(lVar3,2);
      }
      FUN_100401b14(0);
      pcVar7 = FUN_1000b1504;
      uVar9 = 0x39;
      goto LAB_1000b44f0;
    }
  }
  FUN_100401b14(0);
  pcVar7 = FUN_1000b14d8;
  uVar9 = 0x35;
LAB_1000b44f0:
  FUN_1003fb45c(pcVar7,0,0xd000000000000099,0x8000000100881de0,0xd00000000000001c,0x8000000100881f20
                ,uVar9,0);
  return 2;
}

