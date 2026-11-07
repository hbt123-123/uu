// rea decompile_all
// name: FUN_100673404
// address: 0x100673404
// body: available
// range: 0x100673404-0x100673627 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100673404(byte param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_78 [3];
  
  puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined8 *)(unaff_x20 + 0x48) = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined **)(unaff_x20 + 0x38) = puVar6;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = puVar6;
  *(byte *)(unaff_x20 + 0x10) = param_1;
  puVar3 = &DAT_100ab7cc8;
  FUN_100004bb4(&DAT_100ab7cc8,&DAT_100848c30);
  if (param_1 < 2) {
    _swift_initStaticObject();
    lVar5 = *(long *)(puVar3 + 0x10);
    if (lVar5 == 0) {
      _swift_bridgeObjectRelease();
      puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      local_78[0] = puVar6;
      thunk_FUN_100664af4(0,lVar5,0);
      lVar7 = 0x20;
      do {
        uVar8 = *(ulong *)(puVar3 + lVar7);
        if (uVar8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100673628);
          (*pcVar2)();
        }
        uVar1 = *(ulong *)(local_78[0] + 0x10);
        if (*(ulong *)(local_78[0] + 0x18) >> 1 <= uVar1) {
          thunk_FUN_100664af4(1 < *(ulong *)(local_78[0] + 0x18),uVar1 + 1,1);
        }
        puVar6 = local_78[0];
        *(ulong *)(local_78[0] + 0x10) = uVar1 + 1;
        *(int *)(local_78[0] + uVar1 * 4 + 0x20) = (int)uVar8;
        lVar7 = lVar7 + 8;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      _swift_bridgeObjectRelease();
    }
    _swift_beginAccess((undefined8 *)(unaff_x20 + 0x48),local_78,1,0);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
    *(undefined **)(unaff_x20 + 0x48) = puVar6;
    _swift_bridgeObjectRelease(uVar4);
    uVar4 = 0x40;
    if ((param_1 & 0xfe) != 0) {
      uVar4 = 0x80;
    }
    *(undefined8 *)(unaff_x20 + 0x20) = uVar4;
    uVar8 = *(ulong *)(&DAT_10084cab8 + (long)(char)param_1 * 8);
  }
  else {
    if (param_1 == 2) {
      _swift_initStaticObject();
      uVar8 = 0x180;
    }
    else {
      _swift_initStaticObject();
      uVar8 = 0x200;
    }
    _swift_beginAccess((undefined8 *)(unaff_x20 + 0x50),local_78,1,0);
    *(undefined **)(unaff_x20 + 0x50) = puVar3;
    *(undefined8 *)(unaff_x20 + 0x20) = 0x80;
  }
  *(ulong *)(unaff_x20 + 0x18) = uVar8;
  *(ulong *)(unaff_x20 + 0x28) = uVar8 >> 3;
  puVar3 = &DAT_100ab7cc8;
  FUN_100004bb4(&DAT_100ab7cc8,&DAT_100848c30);
  _swift_initStaticObject();
  *(undefined **)(unaff_x20 + 0x30) = puVar3;
  return unaff_x20;
}

