// rea decompile_all
// name: FUN_1001fbe28
// address: 0x1001fbe28
// body: available
// range: 0x1001fbe28-0x1001fc13f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001fbe28(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 in_x4;
  undefined8 *in_x5;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_f0 [16];
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c0 [24];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_c0,0,0);
  lVar4 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 != 0) {
    FUN_1000c8388();
    lVar5 = 0;
    FUN_1001bc1d8();
    uVar6 = 0;
    FUN_100153bbc(0);
    lVar4 = lVar5;
    _swift_dynamicCastClass(lVar5,uVar6);
    if (lVar4 != 0) {
      uVar6 = in_x5[1];
      uVar2 = in_x5[2];
      uVar1 = in_x5[3];
      uVar3 = in_x5[4];
      uVar7 = in_x5[5];
      uVar11 = in_x5[6];
      uVar8 = in_x5[8];
      if ((((uVar8 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
         (*(byte *)(in_x5 + 9) != 0xff)) {
        uVar10 = *in_x5;
        uVar9 = 4;
        if ((*(byte *)(in_x5 + 9) & 1) == 0) {
          uVar9 = 0;
        }
        uVar9 = uVar9 | (uint)(uVar8 >> 0x3c) & 3;
        if (uVar9 < 4) {
          if (uVar9 < 2) {
            if (uVar9 == 0) {
              local_68 = uVar8 & 0xcfffffffffffffff;
              local_a8 = uVar10;
              uStack_a0 = uVar6;
              local_98 = uVar2;
              uStack_90 = uVar1;
              local_88 = uVar3;
              uStack_80 = uVar7;
              local_78 = uVar11;
              uStack_70 = in_x5[7];
              FUN_100157968(in_x4,&local_a8);
            }
            else {
              local_a8 = uVar10;
              uStack_a0 = uVar6;
              local_98 = uVar2;
              uStack_90 = uVar1;
              local_88 = uVar3;
              uStack_80 = uVar7;
              local_78 = uVar11;
              FUN_100159d14(in_x4,&local_a8);
            }
          }
          else if (uVar9 == 2) {
            local_a8 = uVar10;
            uStack_a0 = uVar6;
            local_98 = uVar2;
            uStack_90 = uVar1;
            local_88 = uVar3;
            uStack_80 = uVar7;
            local_78 = uVar11;
            FUN_100159c0c(in_x4,&local_a8);
          }
          else {
            FUN_100401b14(0);
            FUN_1003fb45c(FUN_10015b534,0,0xd0000000000000a4,0x800000010088d870,0xd000000000000036,
                          0x800000010088d920,400,7);
            if (*(char *)(lVar4 + _TtC14UURemoteServer18ClipboardPCManager::
                                  remoteAssistFileTransferEnabled) == '\x01') {
              FUN_10015d890(in_x4,uVar10,uVar6,uVar2);
              FUN_10015e6d0(uVar10,uVar6,uVar2);
            }
            else {
              (*(code *)PTR____chkstk_darwin_100995498)();
              local_e0 = (undefined4)uVar10;
              local_d8 = uVar6;
              uStack_d0 = uVar2;
              FUN_1003fb48c(FUN_100121bdc,auStack_f0,extraout_x12 + 0x6e,0x800000010088d870,
                            0xd000000000000036,0x800000010088d920,0x192,0);
              FUN_10015d890(in_x4,uVar10,uVar6,uVar2);
            }
          }
        }
        else if (uVar9 < 6) {
          if (uVar9 == 4) {
            local_a8 = uVar10;
            uStack_a0 = uVar6;
            local_98 = uVar2;
            uStack_90 = uVar1;
            local_88 = uVar3;
            uStack_80 = uVar7;
            FUN_10015b610(in_x4,&local_a8);
          }
          else {
            FUN_10015ee8c(in_x4,uVar10,uVar6,uVar2);
          }
        }
        else if (uVar9 == 6) {
          FUN_10015e898(in_x4,uVar10,uVar6,uVar2);
        }
        else {
          local_a8 = uVar10;
          uStack_a0 = uVar6;
          local_98 = uVar2;
          uStack_90 = uVar1;
          local_88 = uVar3;
          FUN_10015527c(in_x4,&local_a8);
        }
      }
    }
    _swift_unknownObjectRelease(lVar5);
  }
  return;
}

