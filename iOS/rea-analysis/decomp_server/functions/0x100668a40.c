// rea decompile_all
// name: FUN_100668a40
// address: 0x100668a40
// body: available
// range: 0x100668a40-0x100668b9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100668a40(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 local_58;
  undefined *local_50;
  long local_48;
  
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100668b94);
    (*pcVar5)();
  }
  lVar7 = 0;
  if (param_2 != 0) {
    lVar7 = *(long *)(param_1 + 0x10) / param_2;
  }
  lVar7 = *(long *)(param_1 + 0x10) - lVar7 * param_2;
  uVar3 = param_2 - lVar7;
  if (SBORROW8(param_2,lVar7)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100668b98);
    (*pcVar5)();
  }
  if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100668b9c);
    (*pcVar5)();
  }
  if (0xff < uVar3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100668ba0);
    (*pcVar5)();
  }
  local_48 = param_1;
  if (uVar3 == 0) {
    _swift_bridgeObjectRetain();
  }
  else {
    uVar2 = (int)uVar3 - 1;
    if ((uVar2 & 0xff) == 0) {
      _swift_bridgeObjectRetain();
      puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      uVar8 = (ulong)uVar2 & 0xff;
      local_50 = PTR___swiftEmptyArrayStorage_100995ea0;
      _swift_bridgeObjectRetain();
      FUN_100664ad8(0,uVar8,0);
      do {
        puVar9 = local_50;
        local_58 = 0;
        _swift_stdlib_random(&local_58,8);
        uVar4 = local_58;
        uVar1 = *(ulong *)(puVar9 + 0x10);
        local_50 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
          FUN_100664ad8(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(local_50 + 0x10) = uVar1 + 1;
        local_50[uVar1 + 0x20] = (char)uVar4;
        uVar8 = uVar8 - 1;
        puVar9 = local_50;
      } while (uVar8 != 0);
    }
    puVar6 = &DAT_100ab7e50;
    FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
    _swift_initStackObject();
    *(undefined8 *)(puVar6 + 0x18) = 2;
    *(undefined8 *)(puVar6 + 0x10) = 1;
    puVar6[0x20] = (char)uVar3;
    local_50 = puVar9;
    FUN_100628ae0();
    FUN_100628ae0(local_50);
  }
  return;
}

