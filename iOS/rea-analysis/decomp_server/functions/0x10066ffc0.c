// rea decompile_all
// name: FUN_10066ffc0
// address: 0x10066ffc0
// body: available
// range: 0x10066ffc0-0x1006701eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10066ffc0(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long unaff_x21;
  ulong uVar16;
  undefined8 uVar17;
  undefined1 auStack_88 [40];
  
  thunk_FUN_1006654ec();
  lVar3 = 0;
  FUN_10062fb24();
  puVar8 = auStack_88;
  _swift_initStackObject();
  *(undefined8 *)(lVar3 + 0x18) = param_2;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x10) = param_1;
  lVar4 = lVar3;
  FUN_10062eaac();
  _swift_setDeallocating(lVar3);
  uVar5 = *(undefined8 *)(lVar3 + 0x10);
  FUN_100006cdc(uVar5,*(undefined8 *)(lVar3 + 0x18));
  if (unaff_x21 == 0) {
    if ((((uint)((ulong)puVar8 >> 0x3c) & 3) == 0 && (param_3 & 1) == 0) &&
       (*(long *)(lVar4 + 0x10) == 2)) {
      uVar16 = *(ulong *)(lVar4 + 0x28);
      cVar1 = *(char *)(lVar4 + 0x30);
      uVar13 = 4;
      uVar11 = uVar13;
      if (cVar1 == '\0') {
        uVar11 = 0;
      }
      if (((uint)(uVar16 >> 0x3c) & 3 | uVar11) == 1) {
        uVar15 = *(ulong *)(lVar4 + 0x40);
        bVar2 = *(byte *)(lVar4 + 0x48);
        uVar11 = (uint)bVar2;
        if (bVar2 == 0) {
          uVar13 = 0;
        }
        if (((uint)(uVar15 >> 0x3c) & 3 | uVar13) == 1) {
          uVar17 = *(undefined8 *)(lVar4 + 0x20);
          uVar14 = *(undefined8 *)(lVar4 + 0x38);
          FUN_10062e3d0(uVar17,uVar16,cVar1);
          FUN_10062e3d0(uVar17,uVar16,cVar1);
          FUN_10062e3d0(uVar14,uVar15);
          uVar9 = uVar16 & 0xcfffffffffffffff;
          uVar5 = uVar17;
          FUN_10064c630();
          uVar12 = param_4;
          uVar13 = uVar11;
          FUN_100008184(uVar14,uVar15 & 0xcfffffffffffffff);
          uVar10 = uVar15 & 0xcfffffffffffffff;
          uVar6 = uVar14;
          FUN_10064c630();
          uVar7 = uVar6;
          FUN_100671140();
          _swift_allocObject();
          FUN_10066dd44(uVar5,uVar9,uVar11,param_4,uVar6,uVar10,uVar13,uVar12,0,0,0,0);
          FUN_10062e434(lVar4,puVar8,param_3 & 1);
          FUN_10062e434(uVar17,uVar16,cVar1);
          FUN_10062e434(uVar14,uVar15,bVar2);
          return uVar7;
        }
      }
    }
    FUN_100671170();
    _swift_allocError(&DAT_1009e4c10,uVar5,0,0);
    _swift_willThrow();
    FUN_10062e434(lVar4,puVar8,param_3 & 1);
  }
  return param_1;
}

