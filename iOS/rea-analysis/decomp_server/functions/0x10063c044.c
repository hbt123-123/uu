// rea decompile_all
// name: FUN_10063c044
// address: 0x10063c044
// body: available
// range: 0x10063c044-0x10063c217 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10063c044(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  size_t sVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x20;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  *(long *)(unaff_x20 + 0x10) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  puVar5 = param_1;
  FUN_1006376cc(param_1,param_4);
  _swift_bridgeObjectRelease(param_1);
  if (param_4 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10063c214);
    (*pcVar4)();
  }
  lVar2 = 0;
  if (param_4 != 0) {
    lVar2 = *(long *)(puVar5 + 0x10) / param_4;
  }
  if (lVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10063c218);
    (*pcVar4)();
  }
  if (lVar2 == 0) {
    _swift_bridgeObjectRelease(puVar5);
    uVar11 = 0;
    uVar12 = 0;
  }
  else {
    uVar11 = 0;
    uVar12 = 0;
    lVar10 = 0;
    do {
      uVar9 = lVar10 * param_4;
      if (SUB168(SEXT816(lVar10) * SEXT816(param_4),8) != (long)uVar9 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10063c200);
        (*pcVar4)();
      }
      uVar1 = uVar9 + param_4;
      if (SCARRY8(uVar9,param_4)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10063c204);
        (*pcVar4)();
      }
      sVar3 = uVar1 - uVar9;
      if ((long)uVar1 < (long)uVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10063c208);
        (*pcVar4)();
      }
      if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10063c20c);
        (*pcVar4)();
      }
      uVar8 = *(ulong *)(puVar5 + 0x10);
      if ((uVar8 < uVar9) || ((long)uVar8 < (long)uVar1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10063c210);
        (*pcVar4)();
      }
      if (uVar8 == sVar3) {
        _swift_bridgeObjectRetain(puVar5);
        puVar6 = puVar5;
      }
      else {
        puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
        if (uVar1 != uVar9) {
          if (0 < (long)sVar3) {
            puVar6 = &DAT_100ab7e50;
            FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
            _swift_allocObject();
            puVar7 = puVar6;
            _malloc_size();
            *(size_t *)(puVar6 + 0x10) = sVar3;
            *(long *)(puVar6 + 0x18) = (long)puVar7 * 2 + -0x40;
          }
          _memcpy(puVar6 + 0x20,puVar5 + uVar9 + 0x20,sVar3);
        }
      }
      lVar10 = lVar10 + 1;
      uVar9 = *(ulong *)(puVar6 + 0x28);
      uVar1 = (*(ulong *)(puVar6 + 0x20) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(puVar6 + 0x20) & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      _swift_release(puVar6);
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar11 = (uVar1 >> 0x20 | uVar1 << 0x20) ^ uVar11;
      uVar12 = (uVar9 >> 0x20 | uVar9 << 0x20) ^ uVar12;
      FUN_10063c228(uVar11,uVar12,param_2,param_3);
    } while (lVar2 != lVar10);
    _swift_bridgeObjectRelease(puVar5);
  }
  *(ulong *)(unaff_x20 + 0x38) = uVar11;
  *(ulong *)(unaff_x20 + 0x40) = uVar12;
  return unaff_x20;
}

