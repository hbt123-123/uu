// rea decompile_all
// name: FUN_100176b94
// address: 0x100176b94
// body: available
// range: 0x100176b94-0x100176e4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100176b94(ulong param_1,ulong param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_90 [16];
  ulong auStack_80 [2];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  puVar2 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_70 + -extraout_x8;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  uVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = unaff_x20 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  _swift_weakLoadStrong();
  if (lVar4 != 0) {
    lVar9 = *(long *)(lVar4 + 0x88);
    _swift_retain(lVar9);
    _swift_release(lVar4);
    lVar4 = _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::url;
    if (lVar9 != 0) {
      _swift_beginAccess(lVar9 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::url,auStack_68,
                         0,0);
      FUN_10007f314(lVar9 + lVar4,puVar7,&DAT_100a766c8,&DAT_10080b1d0);
      _swift_release(lVar9);
      puVar5 = puVar7;
      (**(code **)(lVar10 + 0x30))(puVar7,1,lVar3);
      if ((int)puVar5 != 1) {
        uVar6 = uVar8;
        (**(code **)(lVar10 + 0x20))(uVar8,puVar7,lVar3);
        __s10Foundation3URLV4pathSSvg();
        puVar5 = puVar7;
        FUN_100219ce4();
        _swift_bridgeObjectRelease(puVar7);
        (**(code **)(lVar10 + 8))(uVar8,lVar3);
        if (((ulong)puVar5 & 1) != 0) {
          return 0;
        }
        if (uVar6 == 0 || uVar6 < param_1) {
          return 0;
        }
        if (0xfffffffffffa87ff < param_1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100176e48);
          (*pcVar1)();
        }
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(ulong *)(uVar8 - 0x10) = uVar6;
        *(ulong *)(uVar8 - 8) = param_1;
        if (param_2 < param_1 + 0x57800) {
          FUN_1003fb45c(FUN_100177d74,uVar8 - 0x20,0xd0000000000000b4,0x8000000100896020,
                        0xd00000000000001d,0x80000001008960e0,0x133,7);
          if (param_2 < param_1) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100176e4c);
            (*pcVar1)();
          }
          if (param_2 - param_1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100176dbc);
            (*pcVar1)();
          }
          return param_2 - param_1;
        }
        FUN_1003fb45c(FUN_100177d6c,uVar8 - 0x20,0xd0000000000000b4,0x8000000100896020,
                      0xd00000000000001d,0x80000001008960e0,0x136,7);
        return 0x57800;
      }
      goto LAB_100176dd4;
    }
  }
  (**(code **)(lVar10 + 0x38))(puVar7,1,1,lVar3);
LAB_100176dd4:
  FUN_100040bb4(puVar7,&DAT_100a766c8,&DAT_10080b1d0);
  return 0;
}

