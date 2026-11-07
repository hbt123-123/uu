// rea decompile_all
// name: FUN_1003d8f48
// address: 0x1003d8f48
// body: available
// range: 0x1003d8f48-0x1003d916f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003d8fd4) */
/* WARNING: Removing unreachable block (ram,0x0001003d9084) */

void FUN_1003d8f48(long param_1,code *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x21;
  ulong uVar8;
  ulong local_70;
  ulong uStack_68;
  
  lVar2 = _TtC8UUCommon14FileDataMapper::fileURL;
  uVar7 = param_1 + _TtC8UUCommon14FileDataMapper::fileURL;
  uVar6 = 0;
  __s10Foundation4DataV10contentsOf7optionsAcA3URLVh_So20NSDataReadingOptionsVtKcfC();
  if (unaff_x21 != 0) {
    _swift_errorRelease();
    uVar7 = 0;
    uVar6 = 0xf000000000000000;
  }
  local_70 = uVar7;
  uStack_68 = uVar6;
  FUN_10010bd10(uVar7,uVar6);
  (*param_2)(&local_70);
  uVar4 = uStack_68;
  uVar3 = local_70;
  uVar8 = uStack_68 >> 0x3c;
  if (uVar8 < 0xf) {
    if (uVar6 >> 0x3c < 0xf) {
      FUN_10010bd10(uVar7,uVar6);
      FUN_10010bd10(uVar3,uVar4);
      uVar5 = uVar3;
      FUN_1000094a4(uVar3,uVar4,uVar7,uVar6);
      FUN_100006cc8(uVar7,uVar6);
      FUN_100006cc8(uVar3,uVar4);
      if ((uVar5 & 1) != 0) goto LAB_1003d910c;
      goto LAB_1003d904c;
    }
  }
  else if (0xe < uVar6 >> 0x3c) {
    FUN_10010bd10(local_70,uStack_68);
    uVar7 = uVar3;
    uVar6 = uVar4;
LAB_1003d910c:
    FUN_100006cc8(uVar7,uVar6);
    FUN_100006cc8(uVar3,uVar4);
    return;
  }
  FUN_10010bd10(uVar7,uVar6);
  FUN_10010bd10(uVar3,uVar4);
  FUN_100006cc8(uVar3,uVar4);
  FUN_100006cc8(uVar7,uVar6);
LAB_1003d904c:
  uVar5 = 0;
  if (uVar8 < 0xf) {
    uVar5 = uVar3;
  }
  uVar1 = 0xc000000000000000;
  if (uVar8 < 0xf) {
    uVar1 = uVar4;
  }
  FUN_10010bd10(uVar3,uVar4);
  __s10Foundation4DataV5write2to7optionsyAA3URLV_So20NSDataWritingOptionsVtKF
            (param_1 + lVar2,0,uVar5,uVar1);
  FUN_100006cc8(uVar3,uVar4);
  FUN_100006cc8(uVar7,uVar6);
  FUN_100006cdc(uVar5,uVar1);
  return;
}

