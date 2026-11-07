// rea decompile_all
// name: FUN_10066a9e8
// address: 0x10066a9e8
// body: available
// range: 0x10066a9e8-0x10066abcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10066a9e8(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  char cVar11;
  undefined8 local_60;
  undefined *local_58;
  
  lVar7 = *(long *)(param_1 + 0x10) + 3;
  if (SCARRY8(*(long *)(param_1 + 0x10),3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10066abbc);
    (*pcVar3)();
  }
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10066abc0);
    (*pcVar3)();
  }
  if (lVar7 == -0x8000000000000000 && param_2 == -1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10066abcc);
    (*pcVar3)();
  }
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = lVar7 / param_2;
  }
  lVar7 = lVar7 - lVar2 * param_2;
  uVar8 = param_2 - lVar7;
  if (SBORROW8(param_2,lVar7)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10066abc4);
    (*pcVar3)();
  }
  if ((long)uVar8 < 1) {
    uVar8 = param_2 - 3;
    if (SBORROW8(param_2,3)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10066abd0);
      (*pcVar3)();
    }
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10066abc8);
      (*pcVar3)();
    }
    puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (uVar8 == 0) goto LAB_10066ab34;
  }
  local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_100664ad8(0,uVar8,0);
  uVar10 = 0;
  do {
    puVar9 = local_58;
    if (uVar8 <= uVar10) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10066abb4);
      (*pcVar3)();
    }
    bVar4 = SCARRY8(uVar10,1);
    uVar10 = uVar10 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10066abb8);
      (*pcVar3)();
    }
    local_60 = 0;
    _swift_stdlib_random(&local_60,8);
    if (((uint)(byte)local_60 * 0xff & 0xff) == 0) {
      do {
        local_60 = 0;
        _swift_stdlib_random(&local_60,8);
      } while (((uint)(byte)local_60 * 0xff & 0xff) == 0);
      cVar11 = (char)((uint)(byte)local_60 * 0xff >> 8);
    }
    else {
      cVar11 = (char)((uint)(byte)local_60 * 0xff >> 8);
    }
    uVar1 = *(ulong *)(puVar9 + 0x10);
    local_58 = puVar9;
    if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
      FUN_100664ad8(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
    }
    *(ulong *)(local_58 + 0x10) = uVar1 + 1;
    local_58[uVar1 + 0x20] = cVar11 + '\x01';
    puVar9 = local_58;
  } while (uVar10 != uVar8);
LAB_10066ab34:
  puVar5 = &DAT_100ab7e50;
  FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
  puVar6 = puVar5;
  _swift_initStaticObject();
  FUN_100628ae0(puVar9);
  _swift_initStaticObject(puVar5,&DAT_100ab08d8);
  FUN_100628ae0();
  _swift_bridgeObjectRetain(param_1);
  FUN_100628ae0();
  return puVar6;
}

