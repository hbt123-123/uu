// rea decompile_all
// name: FUN_100039690
// address: 0x100039690
// body: available
// range: 0x100039690-0x10003987b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100039690(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if ((long)param_1 < 0) {
      uVar9 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar9 == 0) {
    lVar13 = 0;
    puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    uVar10 = 0;
    lVar13 = 0;
    puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar12 = (ulong *)(PTR___swiftEmptyArrayStorage_100995ea0 + 0x20);
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100039858);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(param_1 + uVar10 * 8 + 0x20);
      }
      else {
        uVar4 = uVar10;
        FUN_100169c00(uVar10,param_1);
      }
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100039810);
        (*pcVar2)();
      }
      uVar11 = uVar10 + 1;
      puVar5 = puVar8;
      if (lVar13 == 0) {
        if ((long)((*(ulong *)(puVar8 + 0x18) >> 1) + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100039860);
          (*pcVar2)();
        }
        uVar7 = *(ulong *)(puVar8 + 0x18) & 0xfffffffffffffffe;
        if ((long)uVar7 < 2) {
          uVar7 = 1;
        }
        puVar5 = &DAT_100a75b30;
        FUN_100004bb4(&DAT_100a75b30,&DAT_100809bc0);
        _swift_allocObject();
        puVar6 = puVar5;
        _malloc_size();
        puVar1 = puVar6 + -0x11;
        if (0x1f < (long)puVar6) {
          puVar1 = puVar6 + -0x20;
        }
        *(ulong *)(puVar5 + 0x10) = uVar7;
        *(long *)(puVar5 + 0x18) = ((long)puVar1 >> 4) << 1;
        puVar6 = puVar5 + 0x20;
        uVar7 = *(ulong *)(puVar8 + 0x18) >> 1;
        if (*(long *)(puVar8 + 0x10) != 0) {
          if ((puVar5 != puVar8) || (puVar8 + 0x20 + uVar7 * 0x10 <= puVar6)) {
            _memmove(puVar6,puVar8 + 0x20,uVar7 << 4);
          }
          *(undefined8 *)(puVar8 + 0x10) = 0;
        }
        puVar12 = (ulong *)(puVar6 + uVar7 * 0x10);
        lVar13 = ((long)puVar1 >> 4 & 0x7fffffffffffffffU) - uVar7;
        _swift_release(puVar8);
      }
      bVar3 = SBORROW8(lVar13,1);
      lVar13 = lVar13 + -1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10003985c);
        (*pcVar2)();
      }
      *puVar12 = uVar10;
      puVar12[1] = uVar4;
      uVar10 = uVar10 + 1;
      puVar8 = puVar5;
      puVar12 = puVar12 + 2;
    } while (uVar11 != uVar9);
  }
  if (1 < *(ulong *)(puVar5 + 0x18)) {
    uVar9 = *(ulong *)(puVar5 + 0x18) >> 1;
    if (SBORROW8(uVar9,lVar13)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10003987c);
      (*pcVar2)();
    }
    *(ulong *)(puVar5 + 0x10) = uVar9 - lVar13;
  }
  return puVar5;
}

