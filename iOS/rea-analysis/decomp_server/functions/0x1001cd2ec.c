// rea decompile_all
// name: FUN_1001cd2ec
// address: 0x1001cd2ec
// body: available
// range: 0x1001cd2ec-0x1001cd4e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001cd2ec(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_b0 [16];
  long local_a0;
  ulong uStack_98;
  long local_90;
  undefined1 auStack_88 [72];
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_88,0x21,0);
  lVar3 = param_1;
  uVar5 = param_2;
  FUN_1001a3028();
  if ((uVar5 & 1) == 0) {
    _swift_endAccess(auStack_88);
  }
  else {
    iVar2 = (int)*(undefined8 *)(unaff_x20 + 0x20);
    _swift_isUniquelyReferenced_nonNull_native();
    local_90 = *(long *)(unaff_x20 + 0x20);
    *(undefined8 *)(unaff_x20 + 0x20) = 0x8000000000000000;
    if (iVar2 == 0) {
      FUN_1000658cc();
    }
    lVar1 = local_90;
    lVar7 = *(long *)(*(long *)(local_90 + 0x38) + lVar3 * 8);
    FUN_10006cf90(lVar3,local_90);
    *(long *)(unaff_x20 + 0x20) = lVar1;
    _swift_endAccess(auStack_88);
    if ((*(byte *)(lVar7 + 0x31) & 1) == 0) {
      *(undefined1 *)(lVar7 + 0x31) = 1;
      uVar6 = *(undefined8 *)(lVar7 + 0x28);
      _swift_retain(uVar6);
      __s7Network12NWConnectionC6cancelyyF();
      _swift_release(uVar6);
      if ((param_3 & 1) != 0) {
        FUN_1001d3390(auStack_88,param_1,param_2);
        puVar4 = &DAT_1009a33f8;
        _swift_allocObject(&DAT_1009a33f8,0x18,7);
        _swift_weakInit(puVar4 + 0x10);
        _swift_retain(puVar4);
        FUN_1001cdaac(auStack_88,0x4e4946,0xe300000000000000,FUN_1001d3780,puVar4,0,0);
        _swift_release_n(puVar4,2);
        FUN_1001d2d44(auStack_88);
      }
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_a0 = param_1;
      uStack_98 = param_2;
      FUN_1003fb48c(FUN_1001d3778,auStack_b0,0xd0000000000000a1,0x800000010089dec0,
                    0xd000000000000025,0x800000010089e2d0,0xff,0);
      _swift_release(lVar7);
    }
    else {
      _swift_release(lVar7);
    }
  }
  return;
}

