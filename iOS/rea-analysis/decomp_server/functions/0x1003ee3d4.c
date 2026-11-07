// rea decompile_all
// name: FUN_1003ee3d4
// address: 0x1003ee3d4
// body: available
// range: 0x1003ee3d4-0x1003ee76b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003ee3d4(double param_1,ID param_2)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  ID IVar4;
  undefined *puVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID self;
  undefined *puVar9;
  undefined *puVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  ID IVar14;
  ID IVar15;
  double dVar16;
  double dVar17;
  
  pcVar11 = "TIFFRepresentation";
  IVar4 = _objc_msgSend(param_2,"TIFFRepresentation");
  if (IVar4 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    puVar5 = &_OBJC_CLASS___NSBitmapImageRep;
    _objc_allocWithZone();
    FUN_100008184(IVar4,pcVar11);
    IVar6 = IVar4;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(IVar4,pcVar11);
    IVar6 = _objc_msgSend((ID)puVar5,"initWithData:",IVar6);
    FUN_100006cdc(IVar4,pcVar11);
    if (IVar6 == 0) {
      FUN_100006cdc(IVar4,pcVar11);
      puVar5 = (undefined *)0x0;
    }
    else {
      IVar7 = _objc_msgSend(IVar6,"pixelsWide");
      IVar8 = _objc_msgSend(IVar6,"pixelsHigh");
      if ((long)IVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ee768);
        (*pcVar3)();
      }
      puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (IVar8 != 0) {
        if ((long)IVar7 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ee76c);
          (*pcVar3)();
        }
        IVar14 = 0;
        do {
          if (IVar7 != 0) {
            IVar15 = 0;
            do {
              self = _objc_msgSend(IVar6,"colorAtX:y:",IVar15,IVar14);
              if (self != 0) {
                _objc_msgSend(self,"redComponent");
                dVar17 = param_1 * 255.0;
                if (0x7fefffffffffffff < (ulong)ABS(dVar17)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ee730);
                  (*pcVar3)();
                }
                if (dVar17 <= -1.0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ee734);
                  (*pcVar3)();
                }
                dVar16 = 4294967296.0;
                if (4294967296.0 <= dVar17) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ee738);
                  (*pcVar3)();
                }
                _objc_msgSend(self,"greenComponent");
                dVar16 = dVar16 * 255.0;
                if (0x7fefffffffffffff < (ulong)ABS(dVar16)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ee73c);
                  (*pcVar3)();
                }
                if (dVar16 <= -1.0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ee740);
                  (*pcVar3)();
                }
                param_1 = 4294967296.0;
                if (4294967296.0 <= dVar16) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ee744);
                  (*pcVar3)();
                }
                _objc_msgSend(self,"blueComponent");
                param_1 = param_1 * 255.0;
                if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ee748);
                  (*pcVar3)();
                }
                if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ee74c);
                  (*pcVar3)();
                }
                if (4294967296.0 <= param_1) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ee750);
                  (*pcVar3)();
                }
                if (((ulong)(uint)(int)dVar17 * 299 & 0xffffffff00000000) != 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ee754);
                  (*pcVar3)();
                }
                if (((ulong)(uint)(int)dVar16 * 0x24b & 0xffffffff00000000) != 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ee758);
                  (*pcVar3)();
                }
                uVar13 = (uint)((ulong)(uint)(int)dVar16 * 0x24b);
                uVar12 = (uint)((ulong)(uint)(int)dVar17 * 299);
                uVar1 = uVar12 + uVar13;
                if (CARRY4(uVar12,uVar13)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ee75c);
                  (*pcVar3)();
                }
                if (((ulong)(uint)(int)param_1 * 0x72 & 0xffffffff00000000) != 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ee760);
                  (*pcVar3)();
                }
                uVar12 = (uint)((ulong)(uint)(int)param_1 * 0x72);
                if (CARRY4(uVar1,uVar12)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ee764);
                  (*pcVar3)();
                }
                puVar9 = puVar5;
                _swift_isUniquelyReferenced_nonNull_native();
                puVar10 = puVar5;
                if (((ulong)puVar9 & 1) == 0) {
                  puVar10 = (undefined *)0x0;
                  FUN_1000344a0(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
                }
                uVar2 = *(ulong *)(puVar10 + 0x10);
                puVar5 = puVar10;
                if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar2) {
                  puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
                  FUN_1000344a0(puVar5,uVar2 + 1,1,puVar10);
                }
                *(ulong *)(puVar5 + 0x10) = uVar2 + 1;
                *(uint *)(puVar5 + uVar2 * 4 + 0x20) = (uVar1 + uVar12) / 1000;
              }
              IVar15 = IVar15 + 1;
            } while (IVar7 != IVar15);
          }
          IVar14 = IVar14 + 1;
        } while (IVar14 != IVar8);
      }
      FUN_100006cdc(IVar4,pcVar11);
    }
  }
  return puVar5;
}

