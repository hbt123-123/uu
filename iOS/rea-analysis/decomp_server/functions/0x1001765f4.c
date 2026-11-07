// rea decompile_all
// name: FUN_1001765f4
// address: 0x1001765f4
// body: available
// range: 0x1001765f4-0x1001768c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1001765f4(ulong param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_a0 [16];
  long alStack_90 [2];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  puVar3 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_80 + -extraout_x8;
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = unaff_x20 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  _swift_weakLoadStrong();
  if (lVar5 != 0) {
    lVar9 = *(long *)(lVar5 + 0x88);
    _swift_retain(lVar9);
    _swift_release(lVar5);
    lVar5 = _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::url;
    if (lVar9 != 0) {
      _swift_beginAccess(lVar9 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::url,auStack_78,
                         0,0);
      FUN_10007f314(lVar9 + lVar5,puVar7,&DAT_100a766c8,&DAT_10080b1d0);
      _swift_release(lVar9);
      puVar6 = puVar7;
      (**(code **)(lVar10 + 0x30))(puVar7,1,lVar4);
      if ((int)puVar6 != 1) {
        lVar5 = lVar8;
        (**(code **)(lVar10 + 0x20))(lVar8,puVar7,lVar4);
        __s10Foundation3URLV4pathSSvg();
        puVar6 = puVar7;
        FUN_100219ce4();
        _swift_bridgeObjectRelease(puVar7);
        if ((((ulong)puVar6 & 1) != 0) || (lVar5 == 0)) {
          (**(code **)(lVar10 + 8))(lVar8,lVar4);
          return param_1;
        }
        uVar1 = param_1 + 0x57800;
        if (0xfffffffffffa87ff < param_1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001768c4);
          (*pcVar2)();
        }
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(long *)(lVar8 + -0x10) = lVar5;
        if (param_2 < uVar1) {
          *(ulong *)(lVar8 + -8) = param_1;
          FUN_1003fb45c(FUN_100177d84,lVar8 + -0x20,0xd0000000000000b4,0x8000000100896020,
                        0xd000000000000023,0x8000000100896180,0x121,7);
          (**(code **)(lVar10 + 8))(lVar8,lVar4);
          return param_2;
        }
        *(ulong *)(lVar8 + -8) = uVar1;
        FUN_1003fb45c(FUN_100177d7c,lVar8 + -0x20,0xd0000000000000b4,0x8000000100896020,
                      0xd000000000000023,0x8000000100896180,0x126,7);
        (**(code **)(lVar10 + 8))(lVar8,lVar4);
        return uVar1;
      }
      goto LAB_100176828;
    }
  }
  (**(code **)(lVar10 + 0x38))(puVar7,1,1,lVar4);
LAB_100176828:
  FUN_100040bb4(puVar7,&DAT_100a766c8,&DAT_10080b1d0);
  return param_1;
}

